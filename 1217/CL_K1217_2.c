
#include <stdio.h>

int sum;

int sigma(int n)
{
    int cloneN;
    int r;
    cloneN = n;
    r = 0;
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", r);
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
    scanf("%d", n);

    /*�����Ŋ֐��Ăяo��*/
    sum = sigma(n);

    /*���ʔ��\*/
    printf("1 ����%d �܂ł̍��v��%d �ł�", n, sum);

}