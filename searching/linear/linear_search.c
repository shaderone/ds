#include<stdio.h>

void linearSearch(int ar[], int size, int target) {
    int i, flag = 0;
    if(size == 0) {
        printf("Array is empty!");
    } else {
        for(i = 0; i < size; i++) {
            if(ar[i] == target) {
                flag = 1;
                printf("%d was found at position %d",target , i+1);
                break;
            }
        }
        if(flag == 0) {
            printf("%d was not found!", target);
        }
    }
}

void main() {
    int ar[20], size, choice, target, i;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter the array elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d",&ar[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    linearSearch(ar, size, target);
    printf("\n");
}