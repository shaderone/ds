#include<stdio.h>
#define size 5

void binarySearch(int ar[], int target) {
    int start = 0, mid = 0, end = size, i, flag = 0;

    // printf("%d ",target);
    // for(i = 0; i< size; i++) {
    //     printf("%d ", ar[i]);
    // }
    // ar = [1, 2, 3, 4, 5];
    for(i = 0; i < size; i++) {
        while(start <= end || flag == 1) {
            mid = (start + end) / 2;
            if(target == ar[mid]) {
                flag = 1;
                printf("%d was found at position %d", target, mid+1);
                return;
            }
            else if(target > ar[mid]) 
                start = mid + 1;
            
            else if(target < ar[mid]) 
                end = mid - 1;
            
        }
    }
    if(flag == 0) {
        printf("%d was not found!", target);
    }
}


void main() {
    int ar[size], target, i;

    printf("----NOTE : data should be entered in sorted order----\n\n");

    printf("Enter the array elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d",&ar[i]);
    }

    printf("Enter the element to be searched : ");
    scanf("%d",&target);

    binarySearch(ar, target);
    printf("\n");
    
}
