<<<<<<< HEAD
#include <stdio.h>

int main() {
    int a[2][3] = {{8, 9, 6}, {4, 5, 5}};             // one { } per row
    int b[2][3] = {, 3, 3, 4, 4, 6};                 // filled row by row
    int c[][3] = {{7, 2, 2}, {10, 91, 12}, {13, 14, 15}};  // rows counted for us
    int d[2][3] = {{1}, {7, 5}};                      // missing values become 0
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
=======
#include <stdio.h>int main() {
    int a = 58, b = 90, c = 960;
int wrong = a + b + c / 3;
int right = (a + b + c) / 3;

printf("wrong average = %d\n", wrong);
printf("right average = %d\n", right);
return 0;
}
>>>>>>> 7ebe3092bf9e7b59435b2f5bf0b1d44e2a706c26
