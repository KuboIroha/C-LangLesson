/*�S�p��2�o�C�g��������͂���Ƌt���ɕ��בւ��ĕ\������v���O����*/
#include <stdio.h>
#include <string.h>

void main(void)
{
    char s[256];
    char invs[256];
    int strl;
    int o;
    o = 0;
    
    /*���͏���*/
    printf("���{�����͂��ĂˁF");
    gets(s);

    /*�v�f���̎Z�o*/
    strl = strlen(s);
    
    /*�v�f������z��Ō���̓Y�������Z�o*/
    strl = strl - 2;

    /*�z��invs�ɔz��s�̓��e���t���ɋl�ߑւ�*/
    for (int i = strl; i >= 0; i=i-2)
    {
        invs[o] = s[i];
        invs[o+1] = s[i+1];

        o = o + 2;
    }
    /*�Ȃ񂩔z��invs�̍Ō�ɕs��̗v�f���ǉ�����Ă�̂�null�������Ԃ�����*/
    invs[o] = '\0';
    
    /*�l�ߑւ���invs��\��*/
    printf("�������܂ɂ��܂��F%s\n", invs);
}