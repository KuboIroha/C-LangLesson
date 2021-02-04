/*
次に示す仕様のユーザ定義関数と、
関数の動作を確認するmain関数を持つCL_K0128_1.cを作成しなさい。
*/

/*
関数名：max

引数  ：（第1引数）int型配列（int型ポインタ），（第2引数）int型

返却値：int型

機能　：第1引数に正の値が格納された配列の配列名または先頭要素のアドレスを、
       第2引数に配列の要素数が与えられる。配列中の最大値を調べ、
       返却値として返すユーザ定義関数である。
       なお、配列の途中で負の値が見つかった場合、返却値として－1を返すこと。
*/

/*
動作確認を行うmain関数ではint型配列変数を宣言し、初期値を設定する。
max関数を実行した後、返却値を表示させる。
*/

#include <stdio.h>

int max(int *idx, int numlen);

void main(void)
{
    //各種宣言
    int idx[256] = {0, 1, 2, 3, 4, 3, -2, 1, 0};
    
    //ユーザ定義関数maxの呼び出し
    int r = max(idx, 9);

    //結果の出力
    printf("\nこの配列中の最大値は %d です\n", r);
}

int max(int *idx, int numlen)
{
    //返却値を宣言
    int returnMax = -1;

    //for文をグルグル回して配列内の要素を一つずつ見る
    for (int i = 0; i < numlen; i++)
    {
        //ちゃんとループ出来てるかのデバッグ用に出力
        //printf("%d ", idx[i]);

        if (returnMax < idx[i]) //retMexの値がidx[i]の数字より小さかったら
        {
            //retMaxの値を更新
            returnMax = idx[i];
        }
        else if (idx[i] <= -1) //配列idx内にマイナスの要素があったら
        {
            //retMaxの値に-1を代入してreturn
            returnMax = -1;
            return returnMax;
        }
        
    }
    //配列idx内にマイナスの要素が無ければここに来るはず
    return returnMax;
}