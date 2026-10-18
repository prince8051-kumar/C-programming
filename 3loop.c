#include <stdio.h>

int main() {
    int n = 4527, reversed = 0;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("Reversed: %d\n", reversed);

    return 0;
}