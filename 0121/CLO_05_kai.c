// �Q�Ɠn���̗��K
#include <stdio.h>
void setValue(int *px, int *py);

void main(void)
{
    int x = 0, y = 0;
    printf("setValue �֐��̌Ăяo���O�Fx = %d�Cy = %d\n", x, y);
    setValue(&x, &y); 
    printf("setValue �֐��̌Ăяo����Fx = %d�Cy = %d\n", x, y);
}

void setValue(int *px, int *py)
{
    printf("main �֐�����󂯎�����l�Fx = %d�Cy = %d\n", *px, *py);
    *px = 123;
    *py = 456;
    printf("setValue �֐��ōX�V�����l�Fx = %d�Cy = %d\n", *px, *py);
}