#include <stdio.h>

void main(void) {
    int sheep, s;
    printf("�r�̐������Ă��������F");
    scanf("%d", &sheep);
    s = sheep % 10;
    
    switch (s) {
    case 0: case 1: case 6: case 8:
        printf("�r��%d �҂�\n", sheep);
        break;
    case 2: case 4: case 5: case 7: case 9:
        printf("�r��%d �Ђ�\n", sheep);
        break;
    default:
        printf("�r��%d �т�\n", sheep);
    }
} 