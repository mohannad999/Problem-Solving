#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 8

typedef struct {
    float data[MAX_QUEUE_SIZE];
    int front;
    int rear;
    int itemCount;
} Queue;

void initialize_queue(Queue *queue) {
    queue->front = 0;
    queue->rear = -1;
    queue->itemCount = 0;
}

bool isFull(Queue *queue) {
    return queue->itemCount == MAX_QUEUE_SIZE;
}

bool isEmpty(Queue *queue) {
    return queue->itemCount == 0;
}

float pop(Queue *queue) {
    float data = queue->data[queue->front++];
    if (queue->front == MAX_QUEUE_SIZE) {
        queue->front = 0;
    }
    queue->itemCount--;
    return data;
}

void append(Queue *queue, float data) {
    if (!isFull(queue)) {
        if (queue->rear == MAX_QUEUE_SIZE - 1) {
            queue->rear = -1;
        }
        queue->data[++queue->rear] = data;
        queue->itemCount++;
    } else {
        printf("Queue is full! Cannot append.\n");
    }
}

void initializeQueueWithZeros(Queue *queue)
{
    while (!isFull(queue))
    {
        append(queue,0.0f);
    }
}


int main() {
    Queue myQueue;


    initialize_queue(&myQueue);
    initializeQueueWithZeros(&myQueue); 
    pop(&myQueue);
    append(&myQueue, 3.12f);


    pop(&myQueue);
    append(&myQueue,12.7f);

    pop(&myQueue);
    append(&myQueue,0.41f);

    printf("Queue: ");
    while (!isEmpty(&myQueue)) {
        float n = pop(&myQueue);
        printf("%.2f ", n);
    }
    printf("\n");

    return 0;
}
