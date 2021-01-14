/*返り値がある関数の自作*/
#include <stdio.h>

int factorial(int n)
{
    int i, r;
    r = 1;

    for (i = 1; i <= n; i ++) {
        r = r * i;
    }
    
    return r;
    /*この関数内ここから下は絶対に実行されない
    */
    printf("10 の階乗は%d です\n", r);
}

void main(void)
{
    int r, n;
    printf("整数を入力してください：");
    scanf("%d", &n);
    r = factorial(n);
    printf("%d の階乗は%d です\n",n, r);
}