/*�����Ƃ��āA�\�������������ichar �^�j�ƌJ��Ԃ��񐔁iint �^�j��^����ƁA*/
/*�������J��Ԃ��ĕ\�����郆�[�U��`�֐� dispMoji ���`���A�\������ۑ�*/
#include <stdio.h>

void dispMoji( char s, int n)
{
    /*�Ђ�����for���O���O���񂵂ĕ�����\��*/
    /*�Ԃ�l�Ȃ�*/
    for (int i = 0; i < n; i++)
    {
        printf("%c", s);
    }
}

void main(void)
{
    /*�錾��*/
    int n;
    char s;

    /*��������X�^�[�g*/
    
    printf("�\\������������������͂��Ă��������F");
    /*�u���v�̕��������G�X�P�[�v����Ȃ��ƕ����������N����*/
    scanf("%c", &s);

    printf("�J��Ԃ��񐔂���͂��Ă��������F");
    scanf("%d", &n);

    /*�֐� dispMoji �Ăяo��*/
    dispMoji(s, n);
}