/*“ñŸŒ³”z—ñ‚Ì—ûK*/
#include <stdio.h>

void main(void)
{
    int y[3][3] = {{1, 2, 3},{2, 4, 6},{3, 6, 9}};
    int i, j; 
    printf("”z—ñ yF\n");
    for (i = 0; i < 3; i = i + 1)
    {
        for (j = 0; j < 3; j = j + 1)
        {
            printf("%d¢", y[i][j]);
        }
        printf("\n");
    }

}