/*引数として、表示したい文字（char 型）と繰り返し回数（int 型）を与えると、*/
/*文字を繰り返して表示するユーザ定義関数 dispMoji を定義し、表示する課題*/
#include <stdio.h>

void dispMoji( char s, int n)
{
    /*ひたすらfor文グルグル回して文字を表示*/
    /*返り値なし*/
    for (int i = 0; i < n; i++)
    {
        printf("%c", s);
    }
}

void main(void)
{
    /*宣言部*/
    int n;
    char s;

    /*ここからスタート*/
    
    printf("表\示させたい文字を入力してください：");
    /*「示」の文字だけエスケープ入れないと文字化けが起きる*/
    scanf("%c", &s);

    printf("繰り返し回数を入力してください：");
    scanf("%d", &n);

    /*関数 dispMoji 呼び出し*/
    dispMoji(s, n);
}