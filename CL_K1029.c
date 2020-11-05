#include <stdio.h>
void main(void){
    int a;
    int b;
    printf("aの値を入力してください：");
    scanf("%d", &a);
    printf("bの値を入力してください：");
    scanf("%d", &b);
    
    //足し算の処理
    int c = a + b;
    printf("%dと", a);
    printf("%dの合計は", b);
    printf("%dです。\n", c);
    
    //割り算の前処理
    if (b == 0 )
    {
        printf("エラー：0で割ることは出来ません");
    }else{
        //ここから割り算
        //割り算の答えを格納する変数dを宣言
        int d;
        //割り算の余りを格納する変数fを宣言
        int f=a;
        for (d = 0; f >= b; d++)
        {
            //もとの変数aの代わりにf-bで計算をする
            f=f-b;
        }
        //まずは割った結果を表示
        printf("%dを", a);
        printf("%dで割った結果は", b);
        printf("%dです\n", d);

        //次に割った余りを表示
        printf("%dを", a);
        printf("%dで割った余りは", b);
        printf("%dです\n", f);

    }
}