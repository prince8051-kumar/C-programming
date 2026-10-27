#include <stdio.h>

int main() {
    int arr[] = {4, 8, 15, 16, 23, 42};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Number of elements: %d\n", n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}