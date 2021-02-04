/*
引数としてint 型の値を与えると、1 から引数の値までの合計を計算し返却値として返すユーザ定義関数sigma を定義しなさい。
なお、引数の値が0 以下の場合は0 を返却値とすること。
*/


/*
なおmain 関数では整数の値を入力し、sigma 関数に入力値を引数として与えて呼び出します。
そして、sigma 関数の返却値を表示します。（sigma 関数で出力を行いません）
*/
#include <stdio.h>

int sigma(int n)
{
    int cloneN = n;
    int r = 0;

    if (n >= 0) //入力されたnが0以下か？
    {
        for (int i = 0; i < n; i++)
        {
            //デバッグ用に返却値rの値を出力
            //printf("%d\n", r);
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
    scanf("%d", &n);

    /*ここで関数呼び出し*/
    int sum = sigma(n);

    /*結果発表*/
    printf("1から%d までの合計は%d です", n, sum);

}