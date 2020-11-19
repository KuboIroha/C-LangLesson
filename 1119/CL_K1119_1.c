/*while文を使って「警告!!」の文字を10回出力する課題*/
#include <stdio.h>

void main(void){
    int i;
    i = 1;
    
    while (i <= 10){
        printf("警告!!\n", i);
        i = i + 1 ;
    }
}