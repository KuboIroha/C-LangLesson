/*文字の配列のみ入力できるgets関数*/

#include <stdio.h>

void main(void)
{
    char s[256];
    printf("文字列を入力してください：");
    gets(s);
    printf("文字列「%s」を受け取りました。",s);
}