#include <stdio.h>

void main(void) {
    int sheep, s;
    printf("羊の数を入れてください：");
    scanf("%d", &sheep);
    s = sheep % 10;
    
    switch (s) {
    case 0: case 1: case 6: case 8:
        printf("羊が%d ぴき\n", sheep);
        break;
    case 2: case 4: case 5: case 7: case 9:
        printf("羊が%d ひき\n", sheep);
        break;
    default:
        printf("羊が%d びき\n", sheep);
    }
} 