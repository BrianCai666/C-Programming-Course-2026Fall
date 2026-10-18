#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char suit_char;
    int num;

    scanf(" %c %d", &suit_char, &num);

    
    const char *suit;
    switch (tolower(suit_char)) {
        case 'a': suit = "黑桃"; break;
        case 'b': suit = "红桃"; break;
        case 'c': suit = "梅花"; break;
        case 'd': suit = "方块"; break;
        default:  suit = "未知花色"; break;
    }

    
    const char *rank;
    switch (num) {
        case 1:  rank = "A"; break;
        case 11: rank = "J"; break;
        case 12: rank = "Q"; break;
        case 13: rank = "K"; break;
        default: rank = NULL; break;
    }

    
    if (rank != NULL) {
        printf("%s%s\n", suit, rank);
    } else {
        printf("%s%d\n", suit, num);
    }

    return 0;
}