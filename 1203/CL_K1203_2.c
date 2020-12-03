/*文字列が扱えるchar型配列（要素数256）a,bを宣言し、配列aに文字列を入力*/
/*その後、配列aを逆順にした文字列を配列bに代入、その文字列の長さと文字列bを表示する処理を行うプログラム*/
#include <stdio.h>

void main(void)
{
    /*宣言部*/
    char a[256];
    int countA;
    countA = 0;

    /*入力処理*/
    printf("文字列aを入力してください：");
    scanf("%s", a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        /*配列の終わりまでループ*/
        /*文字列aの文字数をカウント*/
        countA = countA + 1;
    }
    
    /*配列aの文字数を表示*/
    printf("文字列aの長さは%d文字です\n", countA);

    /*配列bを宣言*/
    char b[countA];

    /*countAの値をいじりたくないので新たな変数を宣言してクローン*/
    int countClone;
    countClone = countA;

    for (int i = 0; i < countA; i++)
    {
        /*配列bに配列aの文字列を代入*/
        b[i] = a[i];
    }

    /*文字数＝添え字とはならないのでここで1引く*/
    countClone = countClone - 1;
    
    /*配列bを逆順に表示*/
    printf("aを逆順にした文字列b：");
    while (countClone >= 0)
    {
        printf("%c", b[countClone]);
        countClone = countClone - 1;
    }
}