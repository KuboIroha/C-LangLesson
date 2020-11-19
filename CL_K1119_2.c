/*for文を使って5の階乗を求める課題*/
#include <stdio.h>

void main(void){
    int i;
    int k;

    k = 1;

    for ( i = 1; i <= 5; i++)
    {
        k = i * k ;
    }
    
    //i=6になってからfor文を抜けるので、表示の都合上ここでiから1を引く
    i = i - 1;

    printf("%dの階乗は", i);
    printf("%dです", k);
}