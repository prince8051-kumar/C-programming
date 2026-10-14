#include <stdio.h>

int main() {
    int n = 5, sumSquares = 0;

    for (int i = 1; i <= n; i++) {
        sumSquares += i * i;
    }

    printf("Sum of squares up to %d: %d\n", n, sumSquares);

    return 0;
}