#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* coin_toss() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    int heads_count = 0;
    int tails_count = 0;
    
    // 乱数のシードを設定
    srand(time(NULL));

    printf("Tossing a coin...\n");
    for (int round_number = 1; round_number <= 3; round_number++) {
        const char* result = coin_toss();
        printf("Round %d: %s\n", round_number, result);
        if (result == "Heads") {
            heads_count++;
        } else {
            tails_count++;
        }
    }
    
    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);
    
    return 0;
}
