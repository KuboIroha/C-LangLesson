/*�񎟌��z��̗��K*/
#include <stdio.h>

void main(void)
{
    char w[5][10] = {"book",
                     "pen",
                     "desk",
                     "computer",
                     "chair"
                     };
    int i;
    printf("�z�� w�F\n");

    for (i = 0; i < 5; i = i + 1)
    {
        printf("%s\n", w[i]);
    }
}