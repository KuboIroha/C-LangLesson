#include <stdio.h>
// #define scanf scanf_s VisualStudioCode�ł��̍s�͗v��Ȃ�

void main(void){
    int x;
    printf("��������͂��Ă��������F");
    scanf("%d", &x);
    printf("x = %d\n", x); 
    if (x >= 10){
        printf("10�ȏ�̐����l���󂯎��܂����B\n");
    }
}