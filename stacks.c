#include <stdio.h>
#define MAX 5   // maximum size of stack

int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Pop function
int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

// Peek function
int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

// Check if empty
int isEmpty() {
    return top == -1;
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Top element is %d\n", peek());

    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());

    if (isEmpty()) {
        printf("Stack is empty now\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}
