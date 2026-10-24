#include <stdio.h>int main() {
    int a = 50, b = 70, c = 90;
int wrong = a + b + c / 3;
int right = (a + b + c) / 3;

printf("wrong average = %d\n", wrong);
printf("right average = %d\n", right);
return 0;
}