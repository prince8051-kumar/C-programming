#include <stdio.h>int main() {
    int found = 0;
for (int n = 1; n <= 100; n++) {
    if (n % 7 == 0 && n % 9 == 0) {
        found = n;
        break;
    }
}

printf("First number divisible by both 7 and 9: %d\n", found);

return 0;
}