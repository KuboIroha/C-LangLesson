/*for文の練習*/

#include <stdio.h>
void main(void) {
    int i;
    printf("繰り返し　ここから\n");
    
    for (i=1; i<=5; i++){
        if( i == 3 )
        {
            continue;
            printf("iが3ですよ");
            //このprintf実行されないんですよね
        }
        printf("繰り返し%d回目\n",i);
    }

    printf("繰り返しここまで\n");
}