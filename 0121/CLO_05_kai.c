// 参照渡しの練習
#include <stdio.h>
void setValue(int *px, int *py);

void main(void)
{
    int x = 0, y = 0;
    printf("setValue 関数の呼び出し前：x = %d，y = %d\n", x, y);
    setValue(&x, &y); 
    printf("setValue 関数の呼び出し後：x = %d，y = %d\n", x, y);
}

void setValue(int *px, int *py)
{
    printf("main 関数から受け取った値：x = %d，y = %d\n", *px, *py);
    *px = 123;
    *py = 456;
    printf("setValue 関数で更新した値：x = %d，y = %d\n", *px, *py);
}