#include <stdio.h>
void setValue(int x, int y);

void main(void)
{
    int x = 0, y = 0;
    printf("setValue �֐��̌Ăяo���O�Fx = %d�Cy = %d\n", x, y);
    setValue(x, y); 
    printf("setValue �֐��̌Ăяo����Fx = %d�Cy = %d\n", x, y);
}

void setValue(int x, int y)
{
    printf("main �֐�����󂯎�����l�Fx = %d�Cy = %d\n", x, y);
    x = 123;
    y = 456;
    printf("setValue �֐��ōX�V�����l�Fx = %d�Cy = %d\n", x, y);
}