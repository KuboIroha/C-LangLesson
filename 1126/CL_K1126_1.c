/*for文を使って、指定した値の階乗（nの階乗＝1×2×3×･･･×n）を計算し、*/
/*実行結果に示すような表示を行うプログラム*/
#include <stdio.h>

void main(void){
    int i;
    int j;
    int k;

    k = 1;

    printf("階乗を求めたい値を入れてください（12以下）：");
    scanf("%d",&j);

    for ( i = 1; i <= j; i++) //カウントアップ
    {
        k = i * k ;
    }
    
    printf("%dの階乗は", j);
    printf("%dです", k);
}