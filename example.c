#include <stdio.h>

int main() {
    int n_items = 20;
    float price_item = 3.5;
    char currency = '$';
    float total_cost = n_items * price_item;

    printf("Total cost = %.2f%c", total_cost, currency);
}