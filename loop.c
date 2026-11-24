#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Multiplication is not possible: columns of A (%d) != rows of B (%d).\n", c1, r2);
        return 0;
    }

    for (int i = 0; i < r1; i++) {
        printf("Enter row %d of A: ", i + 1);
        for (int j = 0; j < c1; j++) scanf("%d", &A[i][j]);
    }
    for (int i = 0; i < r2; i++) {
        printf("Enter row %d of B: ", i + 1);
        for (int j = 0; j < c2; j++) scanf("%d", &B[i][j]);
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nA x B (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%6d", C[i][j]);
        printf("\n");
    }
    return 0;
}