#include <stdio.h>

int main() {
    int i = 6;

    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
  do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");
    return 0;
}
