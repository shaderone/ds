#include<stdio.h>

void bubbleSort(int ar[], int size) {
    int i, j, temp;

    // loop through the array
    // check for greatest between among adjacent index
    // if an item is greater, swap its position else move on to next two numbers

    for ( i = 0; i < size; i++) {
        for ( j = 0; j < size-i; j++) {
            if(ar[j] > ar[j+1]) {
                // swap its position
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }

    // print the elements
    for (i = 0; i < size; i++) {
        printf("%d ", ar[i]);
    }
    
    
}

void main() {
    int ar[10], size, i;
    printf("Enter the size of the arrary:");
    scanf("%d",&size);

    printf("Enter the array elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d",&ar[i]);
    }

    bubbleSort(ar, size);
    
}