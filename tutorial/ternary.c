#include <stdio.h>

int main () {
    int number = 12345;
    int revnum = 0;
    while (number) {
        revnum = revnum * 10 + number % 10;
        number /= 10;
    }
    printf("%d", revnum);
}