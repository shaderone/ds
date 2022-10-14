#include<stdio.h>

int fibonacci(int num) {
    if(num == 0) {
        return 0;
    }
    if(num == 1) {
        return 1;
    }

    return fibonacci(num-1)+fibonacci(num-2);
}

void main() {
    int limit, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (i = 0; i < limit; i++) {
        printf("%d ",fibonacci(i));
    }
    printf("\n");
}