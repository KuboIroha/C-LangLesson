/*�����񂪈�����char�^�z��i�v�f��256�ja,b��錾���A�z��a�ɕ���������*/
/*���̌�A�z��a���t���ɂ����������z��b�ɑ���A���̕�����̒����ƕ�����b��\�����鏈�����s���v���O����*/
#include <stdio.h>

void main(void)
{
    /*�錾��*/
    char a[256];
    int countA;
    countA = 0;

    /*���͏���*/
    printf("������a����͂��Ă��������F");
    scanf("%s", a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        /*�z��̏I���܂Ń��[�v*/
        /*������a�̕��������J�E���g*/
        countA = countA + 1;
    }
    
    /*�z��a�̕�������\��*/
    printf("������a�̒�����%d�����ł�\n", countA);

    /*�z��b��錾*/
    char b[countA];

    /*countA�̒l�������肽���Ȃ��̂ŐV���ȕϐ���錾���ăN���[��*/
    int countClone;
    countClone = countA;

    for (int i = 0; i < countA; i++)
    {
        /*�z��b�ɔz��a�̕��������*/
        b[i] = a[i];
    }

    /*���������Y�����Ƃ͂Ȃ�Ȃ��̂ł�����1����*/
    countClone = countClone - 1;
    
    /*�z��b���t���ɕ\��*/
    printf("a���t���ɂ���������b�F");
    while (countClone >= 0)
    {
        printf("%c", b[countClone]);
        countClone = countClone - 1;
    }
}