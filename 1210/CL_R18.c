#include <stdio.h>
#include <string.h>

void main(void)
{
    char s[256];
    char t[256];
    int i;
    
    printf("��������͂��Ă��������F");
    gets(s);
    printf("�z�� s:%s\n", s);
    printf("�z�� t �ɕ��ʒ�..\n");

    //for (i = 0; i < 256 && s[i] != '\0'; i = i + 1)
    //{
    //    t[i] = s[i];
    //}

    /*�z��t[i]��null������\0�����鏈��*/
    //t[i] = s[i];

    /*string.h�œǂݍ��񂾊֐��ŕ�����R�s�[*/
    strcpy(t, s);

    printf("�z�� t:%s\n", t);
}