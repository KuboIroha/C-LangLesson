/*サイズ10のint型配列aの各要素にそれぞれ*/
/*添え字の10倍の数字を代入して表示するプログラム*/
#include <stdio.h>

void main(void)
{
    int i;
    i = 0;
    int a[10];

    printf("< 実行結果 >\n");

    while (i <= 9)
    {
        a[i] = i * 10;
        i = i + 1;
    }
    
    for (int u = 0; u <= 9; u++)
    {
        printf("a[%d] = %d\n", u,a[u]);
    }
    
}