/*CLO_02を改造*/
/*キーボードから入力した文字列と同じ内容のものが、配列wに含まれているかどうかを調べて結果を表示するプログラム*/
/*なお、文字列の比較には、標準ヘッダファイルstring.hで定義されている文字列比較関数strcmpを使うこと。*/
#include <stdio.h>
#include <string.h>

void main(void)
{
    char w[5][10] = {"book",
                     "pen",
                     "desk",
                     "computer",
                     "chair"
                     };
    int i;
    printf("配列 w：\n");

    for (i = 0; i < 5; i = i + 1)
    {
        printf("%s\n", w[i]);
    }
}