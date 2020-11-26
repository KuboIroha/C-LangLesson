/*二十ループを用いて変数n(n>1)に入力された値による次のような*/
/*四角形を出力するようなプログラム*/
#include <stdio.h>

void main(void)
{
    int i;
    int j;
    int k;
    int n;

    printf("ｎの値を入力：");
    scanf("%d",&n);

    if ( n>1 )
    {
        for ( i = 0; i < n; i++) //行数を制御するfor文
        {
            for (j = 0; j <(n-i)-1 ; j++) //白抜き△を表示するfor文
            {
                printf("▽");
            }

            for (k = 0; k<(i+1); k++)
            {
                printf("▲");
            }
            printf("\n");
        }
    
    }
    else
    {
        printf("１以上の整数を入力してください");
    }
    
    

    
}