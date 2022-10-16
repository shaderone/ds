#include<stdio.h>
#define size 5

int queue[size], front = -1, rear = -1;

int enqueue() {
    int num; 
    if(front == size-1 || rear == size -1) {
        printf("Queue Overflow");
    } else {
        printf("Enter the number to insert: ");
        scanf("%d",&num);
        if(front == -1 || rear == -1) {
            front = rear = 0;
            queue[rear] = num;
        } else {
            rear++;
            queue[rear] = num;
        }
    }
    printf("\n");
}

int dequeue() {
    if(front == -1 && rear == -1) {
        printf("Queue Underflow");
    } else if(front == rear) {
        front = rear = -1;
    } else {
        printf("%d was removed from the queue.", queue[front]);
        front++; 
    }
    printf("\n");
}

int peek() {
    if(front==-1 && rear == -1) {
        printf("Queue Underflow!");
    } else {
        printf("%d is the front element", queue[front]);
    }
    printf("\n");
}

int display() {
    register int i;
    if(front == -1 && rear == -1) {
        printf("Queue Underflow!");
    } else {
        for(i=front;i<=rear;i++){
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

void main() {
    int choice;
    while(choice != 5) {
        printf("Please Select an operation to perform:\n\n1 -> Enqueue | 2 -> Dequeue | 3 -> Peek | 4 -> display | 5 -> EXIT\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Closing program..."); break;
            default: break;
        }
    }
    
}