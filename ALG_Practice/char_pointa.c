#include <stdio.h>
#include <string.h>
 
void main()
{
    char array[7] = "abcdef";/* char�z��̏����� */
    char *ptr = "ghijkl"; /* char�|�C���^�̏����� */
    int cnt;

    /**
    * char�z����A�ꕶ�����\������
    */
    //printf("char�z����A�ꕶ�����\������\n");
    for (cnt = 0; array[cnt] != '\0'; cnt++) {
        printf("%08X %c\n", &array[cnt], array[cnt]);
    }

    printf("-------------------------\n");

    /**
    * char�|�C���^���A�ꕶ�����\������
    */
    //printf("char�|�C���^���A�ꕶ�����\������\n");
    for (cnt = 0; *(ptr + cnt) != '\0'; cnt++) {
        printf("%08X %c\n", ptr + cnt, *(ptr + cnt));
    }
}