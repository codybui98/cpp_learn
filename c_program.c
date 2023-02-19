#include<stdio.h>
#include<stdlib.h>

int main() {
    int i = 10;
    int *ptr = &i;
    printf("%d \n", ptr);
    printf("%d \n", *ptr);
    printf("%d \n", i);
    *ptr = 20;
    printf("%d", i);
    // int n;
    // printf("Hay nhap so n: ");
    // scanf("%d", &n);
    // int *ptr = (int*)malloc(n * sizeof(int));
    // if(ptr == NULL) {
    //     printf("No memory available");
    //     exit(1);
    // }
    // else {
    //     for (int i = 0; i < n; i++) {
    //         scanf("%d", ptr + i);
    //     }
    //     for (int i = 0; i < n; i++) {
    //         printf("%d ", (ptr + i));
    //     }
    // }
    return 0;
}