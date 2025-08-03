#include <stdio.h>

int main () {
    int list [] = {};
    int i;
    int size = sizeof(list) / sizeof(list[0]);
    for (i = 0; i < list; i ++) {
        int element = list [0];
        print("%d%d", i, element);
    }
}