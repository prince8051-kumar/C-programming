#include <stdio.h>

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};             // one { } per row
    int b[2][3] = {1, 2, 3, 4, 5, 6};                 // filled row by row
    int c[][3] = {{7, 8, 9}, {10, 11, 12}, {13, 14, 15}};  // rows counted for us
    int d[2][3] = {{1}, {4, 5}};                      // missing values become 0
    int e[2][3] = {0};                                // everything becomes 0

    int crows = sizeof(c) / sizeof(c[0]);

    printf("a:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("d:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    printf("e:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }

    printf("b[1][0] = %d\n", b[1][0]);
    printf("c has %d rows\n", crows);

    return 0;
}