/*
���Ɏ����d�l�̃��[�U��`�֐��ƁA
�֐��̓�����m�F����main�֐�������CL_K0128_1.c���쐬���Ȃ����B
*/

/*
�֐����Fmax

����  �F�i��1�����jint�^�z��iint�^�|�C���^�j�C�i��2�����jint�^

�ԋp�l�Fint�^

�@�\�@�F��1�����ɐ��̒l���i�[���ꂽ�z��̔z�񖼂܂��͐擪�v�f�̃A�h���X���A
       ��2�����ɔz��̗v�f�����^������B�z�񒆂̍ő�l�𒲂ׁA
       �ԋp�l�Ƃ��ĕԂ����[�U��`�֐��ł���B
       �Ȃ��A�z��̓r���ŕ��̒l�����������ꍇ�A�ԋp�l�Ƃ��ā|1��Ԃ����ƁB
*/

/*
����m�F���s��main�֐��ł�int�^�z��ϐ���錾���A�����l��ݒ肷��B
max�֐������s������A�ԋp�l��\��������B
*/

#include <stdio.h>

int max(int *idx, int numlen);

void main(void)
{
    //�e��錾
    int idx[256] = {0, 1, 2, 3, 4, 3, -2, 1, 0};
    
    //���[�U��`�֐�max�̌Ăяo��
    int r = max(idx, 9);

    //���ʂ̏o��
    printf("\n���̔z�񒆂̍ő�l�� %d �ł�\n", r);
}

int max(int *idx, int numlen)
{
    //�ԋp�l��錾
    int returnMax = -1;

    //for�����O���O���񂵂Ĕz����̗v�f���������
    for (int i = 0; i < numlen; i++)
    {
        //�����ƃ��[�v�o���Ă邩�̃f�o�b�O�p�ɏo��
        //printf("%d ", idx[i]);

        if (returnMax < idx[i]) //retMex�̒l��idx[i]�̐�����菬����������
        {
            //retMax�̒l���X�V
            returnMax = idx[i];
        }
        else if (idx[i] <= -1) //�z��idx���Ƀ}�C�i�X�̗v�f����������
        {
            //retMax�̒l��-1��������return
            returnMax = -1;
            return returnMax;
        }
        
    }
    //�z��idx���Ƀ}�C�i�X�̗v�f��������΂����ɗ���͂�
    return returnMax;
}