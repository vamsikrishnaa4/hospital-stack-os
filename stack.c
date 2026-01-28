#include <stdio.h>
#include "stack.h"

int stack[MAX];
int top = -1;

void push(int id) {
    if (top == MAX - 1) {
        printf("Emergency ward full (Stack Overflow)\n");
        return;
    }
    stack[++top] = id;
    printf("Patient %d admitted\n", id);
}

int pop() {
    if (top == -1) {
        printf("No patients (Stack Underflow)\n");
        return -1;
    }
    return stack[top--];
}

void display() {
    if (top == -1) {
        printf("No emergency patients\n");
        return;
    }
    printf("Emergency patients (Top → Bottom): ");
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}
