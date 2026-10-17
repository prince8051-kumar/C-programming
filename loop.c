#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers to sum (-1 to stop): ");
    scanf("%d", &num);

    while (num != -1) {
        sum += num;
        scanf("%d", &num);
    }

    printf("Total: %d\n", sum);

    return 0;
}