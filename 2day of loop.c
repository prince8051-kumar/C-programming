#include <stdio.h>

int main() {
    int i = 5;

    while (i <= 8) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
  do {
        printf("%d ", i);
        i++;
    } while (i <= 8);
    printf("\n");
    return 0;
}