/*��\���[�v��p���ĕϐ�n(n>1)�ɓ��͂��ꂽ�l�ɂ�鎟�̂悤��*/
/*�l�p�`���o�͂���悤�ȃv���O����*/
#include <stdio.h>

void main(void)
{
    int i;
    int j;
    int k;
    int n;

    printf("���̒l����́F");
    scanf("%d",&n);

    if ( n>1 )
    {
        for ( i = 0; i < n; i++) //�s���𐧌䂷��for��
        {
            for (j = 0; j <(n-i)-1 ; j++) //����������\������for��
            {
                printf("��");
            }

            for (k = 0; k<(i+1); k++)
            {
                printf("��");
            }
            printf("\n");
        }
    
    }
    else
    {
        printf("�P�ȏ�̐�������͂��Ă�������");
    }
    
    

    
}