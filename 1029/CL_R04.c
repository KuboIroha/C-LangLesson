#include <stdio.h>

void main(){
    int num1 = 11;
    double num2 = 123.456789;
    char moji = 'C';
    //C言語において変数宣言は関数内の一番上

    printf("10進整数　%d\n", num1);
    printf("16進整数　%x\n", num1);

    printf("10進実数　%f\n", num2);
    printf("文字　%c\n", moji);
    printf("文字コード　%d", moji);
}