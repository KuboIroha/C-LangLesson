/*while文の練習*/
#include <stdio.h>

void main(void){
    int i;
    printf("繰り返しここから\n");
    i = 1;
    
    while (i <= 3){
        printf("繰り返し%d 回目\n", i);
        i = i + 1 ;
    }
    
    printf("繰り返しここまで\n");
}