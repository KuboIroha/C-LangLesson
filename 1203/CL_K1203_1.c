/*�T�C�Y10��int�^�z��a�̊e�v�f�ɂ��ꂼ��*/
/*�Y������10�{�̐����������ĕ\������v���O����*/
#include <stdio.h>

void main(void)
{
    int i;
    i = 0;
    int a[10];

    printf("< ���s���� >\n");

    while (i <= 9)
    {
        a[i] = i * 10;
        i = i + 1;
    }
    
    for (int u = 0; u <= 9; u++)
    {
        printf("a[%d] = %d\n", u,a[u]);
    }
    
}