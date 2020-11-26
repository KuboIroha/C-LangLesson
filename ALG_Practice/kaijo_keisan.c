/*再帰呼び出しで階乗の計算をするプログラム*/

#include <stdio.h>

int kaijo(int);

int main(int argc, char *argv[])
{
    printf("%d！ = %d\n", 5, kaijo(5));
    return 0;
}

int kaijo(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return (n * kaijo(n-1));
    }
    
}