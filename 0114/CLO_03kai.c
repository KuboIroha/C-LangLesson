#include <stdio.h>

void main(void)
 {
    int i;
    int x = 123, y = -456, z[3] = {100, 200,300};
    double a = 1.234, b[3] = {5.678, 9.0123, 45.6789};
    char c[] = "A";
    char retu[] = "12345678";
    char *px;
    px = &(retu[0]);

    printf("�ϐ�x�̃A�h���X�F%p�Ԓn\n", &x);
    printf("�ϐ�x�̒l�@�@�@ �F%d\n", x);

    printf("-------------------------\n");

    printf("�ϐ�y�̃A�h���X�F%p�Ԓn\n", &y);
    printf("�ϐ�y�̒l�@�@�@ �F%d\n", y);

    printf("-------------------------\n");

    printf("�ϐ�z[0]�̃A�h���X�F%p�Ԓn\n", &z[0]);
    printf("�ϐ�z[0]�̒l�@�@�@ �F%d\n", z[0]);

    printf("�ϐ�z[1]�̃A�h���X�F%p�Ԓn\n", &z[1]);
    printf("�ϐ�z[1]�̒l�@�@�@ �F%d\n", z[1]);

    /*(�����ɂ���a,b,c,retu�ϐ��̃A�h���X�ƒl�\����ǋL���邱��)*/

    printf("-------------------------\n");

    printf("�ϐ�a�̃A�h���X�F%p�Ԓn\n", &a);
    printf("�ϐ�a�̒l�@�@�@�F%f\n", a);

    printf("-------------------------\n");

    for(i=0; i<3; i++)
    {
        printf("�ϐ�b[%d]�̃A�h���X�F%p�Ԓn\n", i, &b[i]);
        printf("�ϐ�b[%d]�̒l�@�@�@�F%f\n", i, b[i]);
    }

    printf("-------------------------\n");

    printf("�ϐ�c�̃A�h���X�F%p�Ԓn\n", &c);
    printf("�ϐ�c�̒l�@�@�@�F%s\n", c);

    printf("-------------------------\n");

    for(i=0; retu[i] != '\0'; i++)
    {
        printf("�ϐ�retu[]�̃A�h���X�F%p�Ԓn\n", px);
        printf("�ϐ�retu[]�̒l�F%c\n", retu[i]);

        px++;
    }

}