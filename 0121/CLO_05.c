#include <stdio.h>
void setValue(int x, int y);

void main(void)
{
    int x = 0, y = 0;
    printf("setValue 関数の呼び出し前：x = %d，y = %d\n", x, y);
    setValue(x, y); 
    printf("setValue 関数の呼び出し後：x = %d，y = %d\n", x, y);
}

void setValue(int x, int y)
{
    printf("main 関数から受け取った値：x = %d，y = %d\n", x, y);
    x = 123;
    y = 456;
    printf("setValue 関数で更新した値：x = %d，y = %d\n", x, y);
}