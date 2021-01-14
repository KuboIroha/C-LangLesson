#include <stdio.h>

void main(void)
 {
    int i;
    int x = 123, y = -456, z[3] = {100, 200,300};
    double a = 1.234, b[3] = {5.678, 9.0123, 45.6789};
    char c[] = "A";
    char retu[] = "12345678";
    char *px;
    px = &(retu[0]);

    printf("変数xのアドレス：%p番地\n", &x);
    printf("変数xの値　　　 ：%d\n", x);

    printf("-------------------------\n");

    printf("変数yのアドレス：%p番地\n", &y);
    printf("変数yの値　　　 ：%d\n", y);

    printf("-------------------------\n");

    printf("変数z[0]のアドレス：%p番地\n", &z[0]);
    printf("変数z[0]の値　　　 ：%d\n", z[0]);

    printf("変数z[1]のアドレス：%p番地\n", &z[1]);
    printf("変数z[1]の値　　　 ：%d\n", z[1]);

    /*(ここにあとa,b,c,retu変数のアドレスと値表示を追記すること)*/

    printf("-------------------------\n");

    printf("変数aのアドレス：%p番地\n", &a);
    printf("変数aの値　　　：%f\n", a);

    printf("-------------------------\n");

    for(i=0; i<3; i++)
    {
        printf("変数b[%d]のアドレス：%p番地\n", i, &b[i]);
        printf("変数b[%d]の値　　　：%f\n", i, b[i]);
    }

    printf("-------------------------\n");

    printf("変数cのアドレス：%p番地\n", &c);
    printf("変数cの値　　　：%s\n", c);

    printf("-------------------------\n");

    for(i=0; retu[i] != '\0'; i++)
    {
        printf("変数retu[]のアドレス：%p番地\n", px);
        printf("変数retu[]の値：%c\n", retu[i]);

        px++;
    }

}