/*�z��̗��K*/
#include <stdio.h>

void main(void) {
    int i;
    int a[10];
    
    printf("�z��ɐ����l���� ��������\n");
    
    for (i = 0; i < 10; i = i + 1) {
        a[i] = i + 100;
        printf("a[%d]=%d\n", i, a[i]);
    }
    printf("�z��ɐ����l���� �����܂�\n");
}