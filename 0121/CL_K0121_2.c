/*
���Ɏ����Q�̃��[�U��`�֐��ƁA�֐��̓�����m�F����main�֐�������CL_K0121_2.c���쐬���Ȃ����B

�֐����FvalueSum
����  �F�i��1�����jint�^�C�i��2�����jint�^
�ԋp�l�Fint�^
�@�\�@�F��1�����ɑ�2�����̒l�������A2�̈����̒l�ƈ����̕ϐ��̃A�h���X��\�����Ă���A
       ��1�����̒l��ԋp�l�Ƃ��ĕԂ����[�U��`�֐��ł���B

�֐����FrefSum
����  �F�i��1�����jint�^�|�C���^�C�i��2�����jint�^
�ԋp�l�F�Ȃ��ivoid�^�j
�@�\�@�F��1�����������l�ɑ�2�����̒l�������Ă���A��1�����������l�Ƒ�2�����̒l�A
       �����2�̕ϐ��̃A�h���X��\�����郆�[�U��`�֐��ł���B

����m�F���s��main�֐��ł�2��int�^�ϐ���錾���A���ꂼ��̕ϐ��̃A�h���X��\������B
�L�[�{�[�h����e�ϐ��ɐ����l����͂����Ă���AvalueSum�֐������s������A2�̕ϐ��̒l��\��������B
����refSum�֐������s������A2�̕ϐ��̒l��\��������B
*/

#include <stdio.h>

int valueSum(int x, int y);

void refSum(int *PX, int y);

void main(void)
{
    int x;
    int y;

    // �ϐ�x��y�̃A�h���X�\��
    printf("�ϐ� x �̃A�h���X��%p�ł�\n", &x);
    printf("�ϐ� y �̃A�h���X��%p�ł�\n", &y);

    // �ϐ�x��y�ɒl�����
    printf("\n�ϐ� x �Ɋi�[����l����͂��Ă��������Fx = ");
    scanf("%d", &x);

    printf("�ϐ� y �Ɋi�[����l����͂��Ă��������Fy = ");
    scanf("%d", &y);

    // �֐�valueSum�����s
    int r = valueSum(x, y);

    // �֐�valueSum���s���x��y��\��
    printf("\nvalueSum�֐����s���main�֐����̕ϐ� x �̒l�Fx = %d\n", x);
    printf("valueSum�֐����s���main�֐����̕ϐ� y �̒l�Fy = %d\n", y);

    // �֐�rerSum�����s
    refSum(&x, y);

    // �֐�refSum���s���x��y��\��
    printf("\nrefSum�֐����s���main�֐����̕ϐ� x �̒l�Fx = %d\n", x);
    printf("refSum�֐����s���main�֐����̕ϐ� y �̒l�Fy = %d\n", y);
}

int valueSum(int x, int y)
{
    //��1�����ɑ�2�����̒l��������
    x = x + y;

    //��1�����̒l�ƃA�h���X�l��\��
    printf("\n�֐� valueSum ���� x �̒l�F%d\n", x);
    printf("�֐� valueSum ���� x �̃A�h���X�l�F%p\n", &x);

    //��2�����̒l�ƃA�h���X�l��\��
    printf("\n�֐� valueSum ���� y �̒l�F%d\n", y);
    printf("�֐� valueSum ���� y �̃A�h���X�l�F%p\n", &y);

    return x;
}

void refSum(int *PX, int y)
{
    //��1�����������l�ɑ�2�����̒l��������
    *PX = *PX + y;

    //��1�����������l�ƃA�h���X�l��\��
    printf("\n�֐� refSum ���� x �̒l�F%d\n", *PX);
    printf("�֐� refSum ���� x �̃A�h���X�l�F%p\n", PX);

    //��2�����̒l�ƃA�h���X�l��\��
    printf("\n�֐� refSum ���� y �̒l�F%d\n", y);
    printf("�֐� refSum ���� y �̃A�h���X�l�F%p\n", &y);
}