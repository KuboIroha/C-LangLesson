/*��ʂƐl������͂���Ƌ��z���v�Z���ĕԂ��v���O����*/
/*���0����ʂ�1800�~*/
/*���1���w����1500�~*/
/*���2���q����1000�~*/
/*��ʂ�-1�����͂����ƃ��[�v���I�����č��v���o��*/
#include <stdio.h>

int goukei;
int ippan;
int gakusei;
int kids;

goukei = 0;
ippan = 1800;
gakusei = 1500;
kids = 1000;

void main(void)
{
    int syubetu;
    int ninzuu;

    syubetu = 999;
    while (syubetu != -1)
    {
        printf("��ʂ���́i�I����-1�j�F");
        scanf("%d", &syubetu);
    
        if (syubetu >= 0 && syubetu <= 2)
        {
            printf("�l������́F");
            scanf("%d", &ninzuu);
            keisan(syubetu, ninzuu);
        }
        else if (syubetu != -1) //�ُ�l�����͂��ꂽ���̏���
        {
            printf("��ʒl�ɂ�-1�`2�܂ł̒l����͂��Ă�������\n");
        }
        
    }
    printf("�{���̔���F%d�~", goukei);
}

//���v�����̌v�Z
void keisan(int zokusei, int kazu){
    switch (zokusei)
    {
    case 0:
        //��ʗ����̌v�Z
        goukei = goukei + ippan * kazu;
        break;

    case 1:
        //�w�������̌v�Z
        goukei = goukei + gakusei * kazu;
        break;

    case 2:
        //�q�������̌v�Z
        goukei = goukei + kids * kazu;
        break;
    
    default:
        break;
    }
}