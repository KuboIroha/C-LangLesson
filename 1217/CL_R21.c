/*•Ô‚è’l‚ª‚ ‚éŠÖ”‚Ì©ì*/
#include <stdio.h>

int factorial(int n)
{
    int i, r;
    r = 1;

    for (i = 1; i <= n; i ++) {
        r = r * i;
    }
    
    return r;
    /*‚±‚ÌŠÖ”“à‚±‚±‚©‚ç‰º‚Íâ‘Î‚ÉÀs‚³‚ê‚È‚¢
    */
    printf("10 ‚ÌŠKæ‚Í%d ‚Å‚·\n", r);
}

void main(void)
{
    int r, n;
    printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
    scanf("%d", &n);
    r = factorial(n);
    printf("%d ‚ÌŠKæ‚Í%d ‚Å‚·\n",n, r);
}