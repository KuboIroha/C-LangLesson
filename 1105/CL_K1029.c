#include <stdio.h>
void main(void){
    int a;
    int b;
    printf("a�̒l����͂��Ă��������F");
    scanf("%d", &a);
    printf("b�̒l����͂��Ă��������F");
    scanf("%d", &b);
    
    //�����Z�̏���
    int c = a + b;
    printf("%d��", a);
    printf("%d�̍��v��", b);
    printf("%d�ł��B\n", c);
    
    //����Z�̑O����
    if (b == 0 )
    {
        printf("�G���[�F0�Ŋ��邱�Ƃ͏o���܂���");
    }else{
        //�������犄��Z
        //����Z�̓������i�[����ϐ�d��錾
        int d;
        //����Z�̗]����i�[����ϐ�f��錾
        int f=a;
        for (d = 0; f >= b; d++)
        {
            //���Ƃ̕ϐ�a�̑����f-b�Ōv�Z������
            f=f-b;
        }
        //�܂��͊��������ʂ�\��
        printf("%d��", a);
        printf("%d�Ŋ��������ʂ�", b);
        printf("%d�ł�\n", d);

        //���Ɋ������]���\��
        printf("%d��", a);
        printf("%d�Ŋ������]���", b);
        printf("%d�ł�\n", f);

    }
}