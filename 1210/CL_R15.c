/*文字列の入る配列に初期値を指定してみて*/
/*その様子を観察するプログラム*/
/*この環境では全角を表示するのに2byte使っている*/
#include <stdio.h>

void main(void)
{
    char s[256] = "C言語";
    char t[] = "凄いよ";
    
    /*文字型配列の途中にnull文字を入れる事もできる*/
    s[2] = '\0';
    
    printf("%sは%s\n", s, t);

    /*s[3]はどうなっているのか？*/
    printf("s[3]はどうなっているのか！？\n");
    printf("s[3] = %c\n", s[3]);
}