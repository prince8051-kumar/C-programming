#include <stdio.h>int main() {
    int a = 58, b = 90, c = 960;
int wrong = a + b + c / 3;
int right = (a + b + c) / 3;

printf("wrong average = %d\n", wrong);
printf("right average = %d\n", right);
return 0;
}
