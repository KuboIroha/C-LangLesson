#include <stdio.h>

void main(void) {
int score;

printf("�_������͂��Ă��������F");
scanf("%d", &score); 

if (score >= 80) {
    printf("���т͂`�ł��B\n"); 
    } else if (score >= 70) {
        printf("���т͂a�ł��B\n");
        } else if (score >= 60) {
            printf("���т͂b�ł��B\n"); 
            } else {
                printf("���т͂c�ł��B\n"); 
            }
} 