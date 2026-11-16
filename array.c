#include <stdio.h>

int main() {
    int a[3][3] = {45,56,78}, {56,52,54}, {1,58,58}};

    printf("First = %d, Centre = %d, Last = %d\n", a[0][0], a[1][1], a[2][2]);

    a[1][2] = 60;
    printf("After change: a[1][2] = %d\n", a[1][2]);

    a[0][0] = a[0][0] + a[2][2];
    printf("a[0][0] is now %d\n", a[0][0]);

    return 0;
}
