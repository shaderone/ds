#include<stdio.h>

void bubbleSort(int ar[], int size) {
    int i, j, temp, isSwapped;

    // loop through the array
    // check for greatest between among adjacent index
    // if an item is greater, swap its position else move on to next two numbers

    for ( i = 0; i < size; i++) {
        isSwapped = 0;
        for ( j = 0; j < size-i; j++) {
            if(ar[j] > ar[j+1]) {
                // swap its position
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
                // to determine wherther array has finished sorting or not (if isSwapped = 0 on loop exit, then we can confirmt that the array is already sorted)
                isSwapped = 1;
            }
        }

        if(isSwapped == 0) {
            break;
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
    printf("\n");
}