/*
�����Ƃ���int �^�̒l��^����ƁA1 ��������̒l�܂ł̍��v���v�Z���ԋp�l�Ƃ��ĕԂ����[�U��`�֐�sigma ���`���Ȃ����B
�Ȃ��A�����̒l��0 �ȉ��̏ꍇ��0 ��ԋp�l�Ƃ��邱�ƁB
*/


/*
�Ȃ�main �֐��ł͐����̒l����͂��Asigma �֐��ɓ��͒l�������Ƃ��ė^���ČĂяo���܂��B
�����āAsigma �֐��̕ԋp�l��\�����܂��B�isigma �֐��ŏo�͂��s���܂���j
*/
#include <stdio.h>

int sigma(int n)
{
    int cloneN = n;
    int r = 0;

    if (n >= 0) //���͂��ꂽn��0�ȉ����H
    {
        for (int i = 0; i < n; i++)
        {
            //�f�o�b�O�p�ɕԋp�lr�̒l���o��
            //printf("%d\n", r);
            r = r + cloneN;
            cloneN = cloneN -1;
        }
    }
    return r;
}

void main(void)
{
    /*�錾��*/
    int n;
    
    /*��������*/
    printf("���v�����߂���������͂��Ă��������F");
    scanf("%d", &n);

    /*�����Ŋ֐��Ăяo��*/
    int sum = sigma(n);

    /*���ʔ��\*/
    printf("1����%d �܂ł̍��v��%d �ł�", n, sum);

}