#include <stdio.h>

void main(void)
{
    int x[5] = {100, 101, 102, 103, 104};
    int i;
    int *px; // �|�C���^�ϐ��̐錾
    px = x; //�z��̎��ɂ�&��t����K�v�������z��̐擪�Ԓn�̃A�h���X������
    for (i = 0; i < 5; i ++) 
    {
        printf("x[%d]�̃A�h���X�F%p�Ԓn\n",i ,px );
        printf("x[%d] = %d\n", i, *px); //&��_����ƃA�h���X�A*�Œ��g�����ɍs��
        px ++; //4�o�C�g���A�h���X��������
        /* printf("x[%d] = %d\n", i, x[i]); */
    } 
}