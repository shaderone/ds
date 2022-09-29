#include<stdio.h>
#define size 5

int ar[size], top = -1;

// stack ops functions
void push() {
    int elm;
    // check if stack is full 
    if(top == size - 1) {
        printf("Stack Overflow");
    } else {
        // get the element to insert
        printf("Enter the element to be inserted: ");
        scanf("%d",&elm);

        //update top && insert element into stack
        top++;
        ar[top] = elm; 
    }
    printf("\n");
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow");
    } else {
        printf("%d was removed from the stack",ar[top]);
        top--;
    }
    printf("\n");
}

void peek() {
    if(top == -1) {
        printf("Stack is EMPTY!");
    } else {
        printf("Top value is : %d",ar[top]);
    }
    printf("\n");
}

void displayStack() {
    printf("The stack elements are : ");
    for (size_t i = 0; i <= top; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void main() {
    int choice;
    while(choice != 5) {
        printf("\nEnter your choice of operation : \n1 - PUSH | 2- POP | 3 - PEEK | 4 - DISPLAY | 5 - EXIT : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: displayStack(); break;
            case 5: choice = 5; break;
            default: choice = 5; break;
        }
    }

}