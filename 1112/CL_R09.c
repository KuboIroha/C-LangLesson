#include <stdio.h>
//#define scanf scanf_s ������borland�Ȃ�K�v

void main(void) {
    int age;
    printf("�N�����͂��Ă��������F");
    scanf("%d", &age);

    if (age >= 10 && age < 20){ 
        printf("���Ȃ��� 10 ��ł��ˁI\n");
        } else {
            printf("���Ȃ��� 10 ��ł͂���܂���ˁB\n");
        }
} 