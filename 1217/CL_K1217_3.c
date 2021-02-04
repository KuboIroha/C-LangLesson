/*
引数として渡された身長height、体重weight からBMI 指数を計算し、それを呼び出し元に返すcalcBMI 関数を定義しなさい。
また、main 関数からcalcBMI 関数を呼び出し、実行結果に示すような表示を行うプログラムを作成しなさい。
なお、BMI 指数は、体重/(身長/100)^2で計算します。
*/

/*calcBMI 関数の中で、画面上に表示するprintf 関数を使ってはいけません。*/

#include <stdio.h>

//BMI指数計算用関数
void calcBMI(double height, double weight, double *BMIsisuu);

//体形判定用関数
void hantei(double BMIsisuu);

//mainここから
void main(void)
{
    //宣言部
    double height, weight, BMIsisuu ;

    //ここから
    //身長の入力
    printf("身長を入力してください：");
    scanf("%lf", &height);

    //体重の入力
    printf("体重を入力してください：");
    scanf("%lf", &weight);

    //デバッグ用に出力
    //printf("\nheight = %.1f\nweight = %.1f", height, weight);

    //calcBMI呼び出し
    calcBMI(height, weight, &BMIsisuu );
    //デバッグ用に変数BMIsisuuを出力
    //printf("BMIsisuu is %.2f",BMIsisuu);

    //結果出力
    printf("%.1fcm、%.1fkgのあなたは、BMI 指数%.2fで", height, weight, BMIsisuu);
    //hantei呼び出し
    hantei(BMIsisuu);

}

//BMI指数の計算用関数
void calcBMI(double height, double weight, double *BMIsisuu)
{
    *BMIsisuu = weight / ((height / 100) * (height / 100));
}

//BMI指数から体形を判定
void hantei(double BMIsisuu)
{
    if( BMIsisuu < 18.5 )
    {
        printf("やせ型です。");
    }
    else if ( BMIsisuu >= 18.5 && BMIsisuu < 25.0)
    {
        printf("標準型です。");
    }
    else if ( BMIsisuu >= 25.0)
    {
        printf("肥満型です。");
    }
    else
    {
        printf("err at 70");
    }
}