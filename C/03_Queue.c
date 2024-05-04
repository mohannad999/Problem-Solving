#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 6

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
    int itemCount;
} Queue;

void initialize(Queue *queue) {
    queue->front = 0;
    queue->rear = -1;
    queue->itemCount = 0;
}

bool isFull(Queue *queue) {
    return queue->itemCount == MAX_SIZE;
}

bool isEmpty(Queue *queue) {
    return queue->itemCount == 0;
}

int removeData(Queue *queue) {
    int data = queue->data[queue->front++];
    if (queue->front == MAX_SIZE) {
        queue->front = 0;
    }
    queue->itemCount--;
    return data;
}

void insert(Queue *queue, int data) {
    if (!isFull(queue)) {
        if (queue->rear == MAX_SIZE - 1) {
            queue->rear = -1;
        }
        queue->data[++queue->rear] = data;
        queue->itemCount++;
    } else {
        printf("Queue is full! Cannot insert.\n");
    }
}

int main() {
    Queue myQueue;
    initialize(&myQueue);

    insert(&myQueue, 3);
    insert(&myQueue, 5);
    insert(&myQueue, 9);
    insert(&myQueue, 1);
    insert(&myQueue, 12);
    insert(&myQueue, 15);

    printf("Queue: ");
    while (!isEmpty(&myQueue)) {
        int n = removeData(&myQueue);
        printf("%d ", n);
    }
    printf("\n");

    return 0;
}
