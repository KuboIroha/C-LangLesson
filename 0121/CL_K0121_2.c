/*
次に示す２つのユーザ定義関数と、関数の動作を確認するmain関数を持つCL_K0121_2.cを作成しなさい。

関数名：valueSum
引数  ：（第1引数）int型，（第2引数）int型
返却値：int型
機能　：第1引数に第2引数の値を加え、2つの引数の値と引数の変数のアドレスを表示してから、
       第1引数の値を返却値として返すユーザ定義関数である。

関数名：refSum
引数  ：（第1引数）int型ポインタ，（第2引数）int型
返却値：なし（void型）
機能　：第1引数が示す値に第2引数の値を加えてから、第1引数が示す値と第2引数の値、
       および2つの変数のアドレスを表示するユーザ定義関数である。

動作確認を行うmain関数では2つのint型変数を宣言し、それぞれの変数のアドレスを表示する。
キーボードから各変数に整数値を入力させてから、valueSum関数を実行した後、2つの変数の値を表示させる。
次にrefSum関数を実行した後、2つの変数の値を表示させる。
*/

#include <stdio.h>

int valueSum(int x, int y);

void refSum(int *PX, int y);

void main(void)
{
    int x;
    int y;

    // 変数xとyのアドレス表示
    printf("変数 x のアドレスは%pです\n", &x);
    printf("変数 y のアドレスは%pです\n", &y);

    // 変数xとyに値を入力
    printf("\n変数 x に格納する値を入力してください：x = ");
    scanf("%d", &x);

    printf("変数 y に格納する値を入力してください：y = ");
    scanf("%d", &y);

    // 関数valueSumを実行
    int r = valueSum(x, y);

    // 関数valueSum実行後のxとyを表示
    printf("\nvalueSum関数実行後のmain関数内の変数 x の値：x = %d\n", x);
    printf("valueSum関数実行後のmain関数内の変数 y の値：y = %d\n", y);

    // 関数rerSumを実行
    refSum(&x, y);

    // 関数refSum実行後のxとyを表示
    printf("\nrefSum関数実行後のmain関数内の変数 x の値：x = %d\n", x);
    printf("refSum関数実行後のmain関数内の変数 y の値：y = %d\n", y);
}

int valueSum(int x, int y)
{
    //第1引数に第2引数の値を加える
    x = x + y;

    //第1引数の値とアドレス値を表示
    printf("\n関数 valueSum 内の x の値：%d\n", x);
    printf("関数 valueSum 内の x のアドレス値：%p\n", &x);

    //第2引数の値とアドレス値を表示
    printf("\n関数 valueSum 内の y の値：%d\n", y);
    printf("関数 valueSum 内の y のアドレス値：%p\n", &y);

    return x;
}

void refSum(int *PX, int y)
{
    //第1引数が示す値に第2引数の値を加える
    *PX = *PX + y;

    //第1引数が示す値とアドレス値を表示
    printf("\n関数 refSum 内の x の値：%d\n", *PX);
    printf("関数 refSum 内の x のアドレス値：%p\n", PX);

    //第2引数の値とアドレス値を表示
    printf("\n関数 refSum 内の y の値：%d\n", y);
    printf("関数 refSum 内の y のアドレス値：%p\n", &y);
}