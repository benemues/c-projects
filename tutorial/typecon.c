#include <stdio.h>

int main() {
    int max_score = 500;
    int player_score = 350;

    float percentage = (float) player_score/max_score * 100.0;

    printf("The user has %.0f percent", percentage);
}