/*全角の2バイト文字を入力すると逆順に並べ替えて表示するプログラム*/
#include <stdio.h>
#include <string.h>

void main(void)
{
    char s[256];
    char invs[256];
    int strl;
    int o;
    o = 0;
    
    /*入力処理*/
    printf("日本語を入力してね：");
    gets(s);

    /*要素数の算出*/
    strl = strlen(s);
    
    /*要素数から配列最後尾の添え字を算出*/
    strl = strl - 2;

    /*配列invsに配列sの内容を逆順に詰め替え*/
    for (int i = strl; i >= 0; i=i-2)
    {
        invs[o] = s[i];
        invs[o+1] = s[i+1];

        o = o + 2;
    }
    /*なんか配列invsの最後に不定の要素が追加されてるのでnull文字をぶち込む*/
    invs[o] = '\0';
    
    /*詰め替えたinvsを表示*/
    printf("さかさまにします：%s\n", invs);
}