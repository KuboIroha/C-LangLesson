#include <stdio.h>

void main(void)
{
    int x, y;
    int *px; //�|�C���^�ϐ���錾����
    x = 123;
    y = -456;
    px = &x; //x�̃A�h���X���|�C���^�ϐ�px�Ɋi�[����

    printf("�ϐ� x �̃A�h���X�F%p �Ԓn\n", px); //&x����px�ɕύX

    printf("�ϐ� x �̒l �F%d\n", x);
    printf("-------------------------\n");
    printf("�ϐ� y �̃A�h���X�F%p �Ԓn\n", &y);

    printf("�ϐ� y �̒l �F%d\n", y);
}