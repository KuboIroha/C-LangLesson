
#include <stdio.h>

int sum;

int sigma(int n)
{
    int cloneN;
    int r;
    cloneN = n;
    r = 0;
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", r);
            r = r + cloneN;
            cloneN = cloneN -1;
        }
    }
    return r;
}

void main(void)
{
    /*宣言部*/
    int n;
    
    

    /*ここから*/
    printf("合計を求めたい数を入力してください：");
    scanf("%d", n);

    /*ここで関数呼び出し*/
    sum = sigma(n);

    /*結果発表*/
    printf("1 から%d までの合計は%d です", n, sum);

}