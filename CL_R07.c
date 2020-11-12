#include <stdio.h>

void main(void) {
int score;

printf("点数を入力してください：");
scanf("%d", &score); 

if (score >= 80) {
    printf("成績はＡです。\n"); 
    } else if (score >= 70) {
        printf("成績はＢです。\n");
        } else if (score >= 60) {
            printf("成績はＣです。\n"); 
            } else {
                printf("成績はＤです。\n"); 
            }
} 