/*
���Ɏ����d�l�̃��[�U��`�֐��ƁA�֐��̓�����m�F����main�֐�������CL_K0128_2.c���쐬���Ȃ����B
*/

/*

�֐����Flength
����  �F�i��1�����jchar�^�z��ichar�^�|�C���^�j
�ԋp�l�Fint�^
�@�\�@�F��1�����ɕ�����ichar�^�z��j�̔z�񖼂܂��͐擪�v�f�̃A�h���X���^������B
    ������̒����i�f�f�܂ł̗v�f���j�𒲂ׁA�ԋp�l�Ƃ��ĕԂ����[�U��`�֐��ł���B
*/

/*
����m�F���s��main�֐��ł�char�^�z��ϐ���錾���A���������͂�����Blength�֐������s������A�ԋp�l��\��������B
*/

#include <stdio.h>

int length(char *idx);

void main(void)
{
    //�錾��
    char t[256];
    int y;

    //���������͂�����
    printf("���������͂��Ă��������F");
    scanf("%s", t);

    //�f�o�b�O�p�ɕ�������o��
    //printf("%s", t);
    
    //���[�U��`�֐��̌Ăяo��
    int r = length(t);

    //���ʂ̏o��
    printf("���͂���������̕������� %d���� �ł�", r);
    
}

int length(char *idx)
{
    //�ԋp�l��錾
    int numlen = 0;

    //for���ŕ������v�Z
    for (int i = 0; idx[i] != '\0'; i++) //�n���ꂽ�z��̗v�f��'\0'����Ȃ�����
    {
        //�ϐ�numlen�ɂP�𑫂�
        numlen++;
    }
    //�ϐ�numlen��return
    return numlen;
}