#include <stdio.h>
//配列の参照渡し

int inputValue3(int x[]);

void main(void)
{
    int x[3], i, r;
    r = inputValue3(x); //配列はポインタなので&が要らない
    printf("入力された数値の合計：%d\n", r);
    for (i = 0; i < 3; i ++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    } 
}

int inputValue3(int *px) //配列をポイントとして受け取る
{
    int i, sum;
    sum = 0;
    for (i = 0; i < 3; i ++) 
    {
        printf("整数を入力してください：");
        scanf("%d", px);
        sum += *px;
        px = px + 1; //px++でも可
    }
    return sum;
}