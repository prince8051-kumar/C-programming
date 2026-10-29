#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos, value;

    printf("Enter position (0 to %d) and value: ", n);
    scanf("%d %d", &pos, &value);

    if (n == 10) {
        printf("Array is full.\n");
    } else if (pos < 0 || pos > n) {
        printf("Invalid position.\n");
    } else {
        for (int i = n - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }
        arr[pos] = value;
        n++;

        printf("Array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}