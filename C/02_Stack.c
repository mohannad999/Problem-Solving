#include <stdio.h>

#define MAX_SIZE 100

// Structure representing the stack
typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initialize(Stack *stack) {
    stack->top = -1;
}

/* Check if the stack is empty */
int isempty(Stack *stack) {
    return (stack->top == -1);
}

/* Check if the stack is full */
int isfull(Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

/* Function to return the topmost element in the stack */
int peek(Stack *stack) {
    if (!isempty(stack)) {
        return stack->data[stack->top];
    } else {
        printf("Stack is empty!\n");
        return -1; // Error value
    }
}

// Function to push an element onto the stack
void push(Stack *stack, int value) {
    if (!isfull(stack)) {
        stack->data[++stack->top] = value;
    } else {
        printf("Stack overflow!\n");
    }
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (!isempty(stack)) {
        return stack->data[stack->top--];
    } else {
        printf("Stack underflow!\n");
        return -1; // Error value
    }
}

int main() {
    Stack myStack;
    initialize(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    printf("Top value: %d\n", peek(&myStack));
    
      while(!isempty(&myStack)) {
      int data = pop(&myStack);
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull(&myStack)?"true":"false");
   printf("Stack empty: %s\n" , isempty(&myStack)?"true":"false");

push(&myStack, 99);
push(&myStack, 88);
pop(&myStack);
printf("Top value: %d\n", peek(&myStack));
//printf("Top value: %d\n", peek(&myStack));
    return 0;
}
