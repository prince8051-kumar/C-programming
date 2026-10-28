#include <stdio.h>

int main() {
    int marks[3][4];

    marks[0][0] = 78;
    marks[1][2] = 79;
    marks[2][3] = 48;

    printf("marks[0][0] = %d\n", marks[0][0]);
    printf("marks[1][2] = %d\n", marks[1][2]);
    printf("marks[2][3] = %d\n", marks[2][3]);

    return 0;
}