/*for�����g����5�̊K������߂�ۑ�*/
#include <stdio.h>

void main(void){
    int i;
    int k;

    k = 1;

    for ( i = 1; i <= 5; i++)
    {
        k = i * k ;
    }
    
    //i=6�ɂȂ��Ă���for���𔲂���̂ŁA�\���̓s���ケ����i����1������
    i = i - 1;

    printf("%d�̊K���", i);
    printf("%d�ł�", k);
}