/*配列の練習*/
#include <stdio.h>

void main(void) {
    int i;
    int a[10];
    
    printf("配列に整数値を代入 ここから\n");
    
    for (i = 0; i < 10; i = i + 1) {
        a[i] = i + 100;
        printf("a[%d]=%d\n", i, a[i]);
    }
    printf("配列に整数値を代入 ここまで\n");
}