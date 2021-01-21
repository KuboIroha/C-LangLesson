/*次に示す仕様のユーザ定義関数と、関数の動作を確認するmain関数を持つCL_K0121.cを作成しなさい。

関数名：swap
引数  ：（第1引数）int型ポインタ，（第2引数）int型ポインタ
返却値：なし（void型）
機能　：第1引数が示す値と第2引数が示す値を交換するユーザ定義関数である。

動作確認を行うmain関数では2つのint型変数を宣言する。
キーボードから各変数に整数値を入力させてから、swap関数を実行した後、2つの変数の値を表示させる。
*/

#include <stdio.h>

void swap(int *px, int *py); //第一引数と第二引数を入れ替える関数

void main(void)
{
    int x;
    int y;

    printf("整数 X を入力してください：");
    scanf("%d", &x);

    printf("整数 Y を入力してください：");
    scanf("%d", &y);

    swap(&x, &y); //参照渡し

    printf("X と Y を入れ替えました\n");
    printf(" X = %d, Y = %d", x, y);
}

void swap(int *px, int *py)
{
    int toY = *px;
    *px = *py;
    *py = toY;
}