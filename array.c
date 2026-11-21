#include <stdio.h>

int main() {
    int arr[10];
    int n = 0;
    int choice, pos, value;

    do {
        printf("\n1. Insert  2. Delete  3. Display  4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n == 10) {
                    printf("Array is full.\n");
                    break;
                }
                printf("Enter position (0 to %d) and value: ", n);
                scanf("%d %d", &pos, &value);
                if (pos < 0 || pos > n) {
                    printf("Invalid position.\n");
                    break;
                }
                for (int i = n - 1; i >= pos; i--) {
                    arr[i + 1] = arr[i];
                }
                arr[pos] = value;
                n++;
                printf("Inserted %d at position %d.\n", value, pos);
                break;

            case 2:
                if (n == 0) {
                    printf("Array is empty.\n");
                    break;
                }
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position.\n");
                    break;
                }
                printf("Deleted %d.\n", arr[pos]);
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                break;

            case 3:
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
