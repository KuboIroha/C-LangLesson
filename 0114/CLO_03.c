#include <stdio.h>

void main(void)
{
    int x, y;
    int *px; //ポインタ変数を宣言する
    x = 123;
    y = -456;
    px = &x; //xのアドレスをポインタ変数pxに格納する

    printf("変数 x のアドレス：%p 番地\n", px); //&xからpxに変更

    printf("変数 x の値 ：%d\n", x);
    printf("-------------------------\n");
    printf("変数 y のアドレス：%p 番地\n", &y);

    printf("変数 y の値 ：%d\n", y);
}