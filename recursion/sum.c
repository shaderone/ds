#include<stdio.h>

int sum(int num) {
    if(num <= 1) {
        return 1;
    }

    return num+sum(num-1);
}

void main() {
    int limit;

    printf("Enter the limit: ");
    scanf("%d",&limit);

    printf("Sum of first %d numbers is : %d", limit, sum(limit));
}