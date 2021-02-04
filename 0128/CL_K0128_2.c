/*
次に示す仕様のユーザ定義関数と、関数の動作を確認するmain関数を持つCL_K0128_2.cを作成しなさい。
*/

/*

関数名：length
引数  ：（第1引数）char型配列（char型ポインタ）
返却値：int型
機能　：第1引数に文字列（char型配列）の配列名または先頭要素のアドレスが与えられる。
    文字列の長さ（’’までの要素数）を調べ、返却値として返すユーザ定義関数である。
*/

/*
動作確認を行うmain関数ではchar型配列変数を宣言し、文字列を入力させる。length関数を実行した後、返却値を表示させる。
*/

#include <stdio.h>

int length(char *idx);

void main(void)
{
    //宣言部
    char t[256];
    int y;

    //文字列を入力させる
    printf("文字列を入力してください：");
    scanf("%s", t);

    //デバッグ用に文字列を出力
    //printf("%s", t);
    
    //ユーザ定義関数の呼び出し
    int r = length(t);

    //結果の出力
    printf("入力した文字列の文字数は %d文字 です", r);
    
}

int length(char *idx)
{
    //返却値を宣言
    int numlen = 0;

    //for文で文字数計算
    for (int i = 0; idx[i] != '\0'; i++) //渡された配列の要素が'\0'じゃない限り
    {
        //変数numlenに１を足す
        numlen++;
    }
    //変数numlenをreturn
    return numlen;
}