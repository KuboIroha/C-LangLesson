#include <stdio.h>

int inputValue(int *px, int *py);

void main(void) 
{
    int x, y, r;
    r = inputValue(&x, &y); 
    printf("\n");
    printf("���͂��ꂽ���l�̍��v�F%d�ix = %d�Cy = %d�j\n", r, x, y);
}

int inputValue(int *px, int *py)
{
    printf("��������͂��Ă��������F");
    scanf("%d", px);
    //������&��t����ƃ|�C���^�ϐ��̃A�h���X�Ƃ������ɂȂ��Ă��܂�

    printf("��������͂��Ă��������F");
    scanf("%d", py);
    return *px + *py;
}