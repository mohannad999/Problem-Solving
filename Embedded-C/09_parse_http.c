#include <stdio.h>
#include <string.h>

void parse_http_response(const char *response) {
    // Search for the status code and response length
    char *status_start = strstr(response, "+QHTTPGET: 0,");
    if (status_start != NULL) {
        int status_code = 0;
        int response_length = 0;
        sscanf(status_start, "+QHTTPGET: 0,%d,%d", &status_code, &response_length);
        printf("Status Code: %d\n", status_code);
        printf("Response Length: %d\n", response_length);
    }

    // Search for the start of the message
    char *message_start = strstr(response, "Welcome to");
    if (message_start != NULL) {
        // Find the end of the message
        char *message_end = strchr(message_start, '\n');
        if (message_end != NULL) {
            int message_length = message_end - message_start;
            char message[message_length + 1]; // Add 1 for null terminator
            strncpy(message, message_start, message_length);
            message[message_length] = '\0'; // Null-terminate the string
            printf("Received Data: %s\n", message);
        }
    }
}

int main() {
    // Example usage
    const char *response = "+QHTTPGET: 0,200,30\nAT+QHTTPREAD=2\nCONNECT\nWelcome to IOTISTIC HTTP CONFG\nOK";
    parse_http_response(response);
    return 0;
}
