/*�Ԃ�l������֐��̎���*/
#include <stdio.h>

int factorial(int n)
{
    int i, r;
    r = 1;

    for (i = 1; i <= n; i ++) {
        r = r * i;
    }
    
    return r;
    /*���̊֐����������牺�͐�΂Ɏ��s����Ȃ�
    */
    printf("10 �̊K���%d �ł�\n", r);
}

void main(void)
{
    int r, n;
    printf("��������͂��Ă��������F");
    scanf("%d", &n);
    r = factorial(n);
    printf("%d �̊K���%d �ł�\n",n, r);
}