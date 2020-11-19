#include <stdio.h>

void main(void) {
    int sheep, s;
    printf("—r‚Ì”‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢F");
    scanf("%d", &sheep);
    s = sheep % 10;
    
    switch (s) {
    case 0: case 1: case 6: case 8:
        printf("—r‚ª%d ‚Ò‚«\n", sheep);
        break;
    case 2: case 4: case 5: case 7: case 9:
        printf("—r‚ª%d ‚Ğ‚«\n", sheep);
        break;
    default:
        printf("—r‚ª%d ‚Ñ‚«\n", sheep);
    }
} 