#include <stdio.h>

int main() {
    int n = 10;

    printf("while loop: ");
    while (n < 5) {
        printf("%d ", n);
    }
    printf("(nothing printed)\n");

    printf("do-while loop: ");
    do {
        printf("%d ", n);
    } while (n < 5);
    printf("\n");

    return 0;
}