/*do-while���̗��K*/
#include <stdio.h>

void main(void){
    int i;
    printf("�J��Ԃ��@��������\n");
    i = 1;
    do {
        printf("i=%d�A�J��Ԃ���\n", i);
        i = i + 1;

    }while(i < 1);
    printf("i=%d�J��Ԃ������܂�\n", i);
}