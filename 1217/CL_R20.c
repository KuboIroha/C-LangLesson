/*自作関数のお勉強*/
#include <stdio.h>

/*Cだけ先に宣言だけすることも可能*/
void dispHello(void)
{
    printf("Hello World!");
}

void main(void)
{
    printf("実行開始");
    dispHello();
    dispHello();
}

/*そしてあとから内容を定義することができる。*/
/*ただmain関数より上に書くのが基本*/
