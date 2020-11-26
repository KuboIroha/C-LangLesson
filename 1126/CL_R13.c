#include <stdio.h>

void main(void){

    int i, j;
    printf("‹ã‹ã‚Ì•\Ž¦\n");
    for (i = 1; i <= 3; i = i + 1)
    {
        for (j = 1; j <= 9; j = j + 1)
        {
            printf("%d~%d%2d ", i, j, i * j);
        }
        printf("\n");
    }
}