#include <stdio.h>
//�z��̎Q�Ɠn��

int inputValue3(int x[]);

void main(void)
{
    int x[3], i, r;
    r = inputValue3(x); //�z��̓|�C���^�Ȃ̂�&���v��Ȃ�
    printf("���͂��ꂽ���l�̍��v�F%d\n", r);
    for (i = 0; i < 3; i ++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    } 
}

int inputValue3(int *px) //�z����|�C���g�Ƃ��Ď󂯎��
{
    int i, sum;
    sum = 0;
    for (i = 0; i < 3; i ++) 
    {
        printf("��������͂��Ă��������F");
        scanf("%d", px);
        sum += *px;
        px = px + 1; //px++�ł���
    }
    return sum;
}