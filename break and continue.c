#include <stdio.h>
int main() {
    int pin;
    int granted = 0;
for (int attempt = 1; attempt <= 3; attempt++) {
    printf("Attempt %d - enter PIN: ", attempt);
    scanf("%d", &pin);

    if (pin == 1234) {
        granted = 1;
        break;
    }
    printf("Wrong PIN.\n");
}

if (granted) {
    printf("Access granted.\n");
} 
else {
    printf("Card blocked.\n");
}

return 0;
}