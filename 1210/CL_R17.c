/*�����̔z��̂ݓ��͂ł���gets�֐�*/

#include <stdio.h>

void main(void)
{
    char s[256];
    printf("���������͂��Ă��������F");
    gets(s);
    printf("������u%s�v���󂯎��܂����B",s);
}