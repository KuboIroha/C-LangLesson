/*for���̗��K*/

#include <stdio.h>
void main(void) {
    int i;
    printf("�J��Ԃ��@��������\n");
    
    for (i=1; i<=5; i++){
        if( i == 3 )
        {
            continue;
            printf("i��3�ł���");
            //����printf���s����Ȃ���ł����
        }
        printf("�J��Ԃ�%d���\n",i);
    }

    printf("�J��Ԃ������܂�\n");
}