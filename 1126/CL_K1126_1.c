/*for�����g���āA�w�肵���l�̊K��in�̊K�恁1�~2�~3�~����~n�j���v�Z���A*/
/*���s���ʂɎ����悤�ȕ\�����s���v���O����*/
#include <stdio.h>

void main(void){
    int i;
    int j;
    int k;

    k = 1;

    printf("�K������߂����l�����Ă��������i12�ȉ��j�F");
    scanf("%d",&j);

    for ( i = 1; i <= j; i++) //�J�E���g�A�b�v
    {
        k = i * k ;
    }
    
    printf("%d�̊K���", j);
    printf("%d�ł�", k);
}