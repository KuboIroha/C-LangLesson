/*do-while文の練習*/
#include <stdio.h>

void main(void){
    int i;
    printf("繰り返し　ここから\n");
    i = 1;
    do {
        printf("i=%d、繰り返し中\n", i);
        i = i + 1;

    }while(i < 1);
    printf("i=%d繰り返しここまで\n", i);
}