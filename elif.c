#include <stdio.h>

int main() {
    int time = 19;
    if (time <= 12) {
        printf("Guten Morgen");
    } else if (time <= 18) {
        printf("Guten Tag");
    } else {
        printf("guten Abend");
    }
}