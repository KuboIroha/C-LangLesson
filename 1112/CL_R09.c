#include <stdio.h>
//#define scanf scanf_s ここはborlandなら必要

void main(void) {
    int age;
    printf("年齢を入力してください：");
    scanf("%d", &age);

    if (age >= 10 && age < 20){ 
        printf("あなたは 10 代ですね！\n");
        } else {
            printf("あなたは 10 代ではありませんね。\n");
        }
} 