/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ACC_MAG_LIST_SIZE 10 // Define the maximum size of the acceleration magnitude list

typedef struct {
    double ax_raw;
    double ay_raw;
    double az_raw;
} AccelerationReadings;

typedef struct {
    double *values; // Array to store acceleration magnitudes
    size_t size;    // Current size of the list
} AccMagList;

// Function to initialize the acceleration magnitude list
AccMagList init_acc_mag_list() {
    AccMagList acc_mag_list;
    acc_mag_list.values = (double *)malloc(ACC_MAG_LIST_SIZE * sizeof(double));
    acc_mag_list.size = 0;
    return acc_mag_list;
}

// Function to append a new value to the acceleration magnitude list
void append_acc_mag(AccMagList *acc_mag_list, double value) {
    // Check if the list is full
    if (acc_mag_list->size == ACC_MAG_LIST_SIZE) {
        // Remove the oldest value by shifting all values to the left
        for (size_t i = 0; i < ACC_MAG_LIST_SIZE - 1; i++) {
            acc_mag_list->values[i] = acc_mag_list->values[i + 1];
        }
        acc_mag_list->size--; // Decrease the size
    }
    // Append the new value to the end of the list
    acc_mag_list->values[acc_mag_list->size++] = value;
}

// Function to remove the oldest value from the acceleration magnitude list
void pop_acc_mag(AccMagList *acc_mag_list) {
    if (acc_mag_list->size > 0) {
        // Shift all values to the left
        for (size_t i = 0; i < acc_mag_list->size - 1; i++) {
            acc_mag_list->values[i] = acc_mag_list->values[i + 1];
        }
        acc_mag_list->size--; // Decrease the size
    }
}

// Function to calculate the acceleration magnitude
double calculate_acc_mag(AccelerationReadings readings, double mag_offset) {
    return sqrt(readings.ax_raw * readings.ax_raw + readings.ay_raw * readings.ay_raw + readings.az_raw * readings.az_raw) - mag_offset;
}

int main() {
    // Initialize acceleration magnitude list
    AccMagList acc_mag_list = init_acc_mag_list();

    // Simulate reading accelerometer values
    AccelerationReadings readings = {1.0, 2.0, 3.0}; // Example values
    double mag_offset = 0.5; // Example mag_offset

    // Calculate acceleration magnitude
    double a_mag = calculate_acc_mag(readings, mag_offset);

    // Append acceleration magnitude to the list
    append_acc_mag(&acc_mag_list, a_mag);
        // Print the acceleration magnitude list
    printf("Acceleration Magnitude List:before append\n");
    for (size_t i = 0; i < acc_mag_list.size; i++) {
        printf("%.2f ", acc_mag_list.values[i]);
    }
    printf("\n");

    // Pop the oldest value from the list (if needed)
    pop_acc_mag(&acc_mag_list);

    // Print the acceleration magnitude list
    printf("Acceleration Magnitude List After pop:\n");
    for (size_t i = 0; i < acc_mag_list.size; i++) {
        printf("%.2f ", acc_mag_list.values[i]);
    }
    printf("\n");

    // Free memory allocated for the list
    free(acc_mag_list.values);

    return 0;
}