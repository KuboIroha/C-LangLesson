#include <stdio.h>

void main(void)
{
    int x[5] = {100, 101, 102, 103, 104};
    int i;
    int *px; // ポインタ変数の宣言
    px = x; //配列の時には&を付ける必要が無く配列の先頭番地のアドレスが入る
    for (i = 0; i < 5; i ++) 
    {
        printf("x[%d]のアドレス：%p番地\n",i ,px );
        printf("x[%d] = %d\n", i, *px); //&を点けるとアドレス、*で中身を見に行く
        px ++; //4バイトずつアドレスが増える
        /* printf("x[%d] = %d\n", i, x[i]); */
    } 
}