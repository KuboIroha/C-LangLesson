#include <stdio.h>
#include <string.h>

void main(void)
{
    char s[256];
    char t[256];
    int i;
    
    printf("文字を入力してください：");
    gets(s);
    printf("配列 s:%s\n", s);
    printf("配列 t に複写中..\n");

    //for (i = 0; i < 256 && s[i] != '\0'; i = i + 1)
    //{
    //    t[i] = s[i];
    //}

    /*配列t[i]にnull文字の\0を入れる処理*/
    //t[i] = s[i];

    /*string.hで読み込んだ関数で文字列コピー*/
    strcpy(t, s);

    printf("配列 t:%s\n", t);
}