#include<stdio.h>

#define size 7

void selectionSort(int ar[]) {
    register int i, j;
    int currentMinimum, temp;
    // check each element with the rest of the array elements and update the smallest-no. status on progress
    // when the loop is finished update the currentMinimum as the first element in the sorted partition

    for (i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if(ar[i] <ar[j]) {
                currentMinimum = ar[j];
                temp = ar[i];
                ar[i] = currentMinimum;
                ar[j] = temp;
            }
        }
    }

    printf("The array elements are : ");
    for (i = 0; i < size; i++) {
        printf("%d ",ar[i]);
    }
    
    
}

void main() {
    register int i;
    int ar[size];
    printf("Enter the array elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d",&ar[i]);
    }
    
    selectionSort(ar);
}