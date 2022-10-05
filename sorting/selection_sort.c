#include<stdio.h>

#define size 7

void selectionSort(int ar[]) {
    register int i, j;
    int currentMinimum, temp;
    // check each element with the rest of the array elements and update the smallest-no. status on progress
    // when the loop is finished update the currentMinimum as the first element in the sorted partition

    for (i = 0; i < size; i++) {
        currentMinimum = i;
        // j keeps track of the current item
        for(j = i+1; j < size; j++) {
            if(ar[currentMinimum] > ar[j]) {
                currentMinimum = j;
            }
        }
        // swap the numbers
        temp = ar[i];
        ar[i] = ar[currentMinimum];
        ar[currentMinimum] = temp;
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