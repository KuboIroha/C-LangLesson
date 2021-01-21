#include <stdio.h>

int inputValue(int *px, int *py);

void main(void) 
{
    int x, y, r;
    r = inputValue(&x, &y); 
    printf("\n");
    printf("入力された数値の合計：%d（x = %d，y = %d）\n", r, x, y);
}

int inputValue(int *px, int *py)
{
    printf("整数を入力してください：");
    scanf("%d", px);
    //ここに&を付けるとポインタ変数のアドレスという事になってしまう

    printf("整数を入力してください：");
    scanf("%d", py);
    return *px + *py;
}