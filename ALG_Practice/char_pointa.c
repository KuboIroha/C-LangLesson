#include <stdio.h>
#include <string.h>
 
void main()
{
    char array[7] = "abcdef";/* char配列の初期化 */
    char *ptr = "ghijkl"; /* charポインタの初期化 */
    int cnt;

    /**
    * char配列を、一文字ずつ表示する
    */
    //printf("char配列を、一文字ずつ表示する\n");
    for (cnt = 0; array[cnt] != '\0'; cnt++) {
        printf("%08X %c\n", &array[cnt], array[cnt]);
    }

    printf("-------------------------\n");

    /**
    * charポインタを、一文字ずつ表示する
    */
    //printf("charポインタを、一文字ずつ表示する\n");
    for (cnt = 0; *(ptr + cnt) != '\0'; cnt++) {
        printf("%08X %c\n", ptr + cnt, *(ptr + cnt));
    }
}