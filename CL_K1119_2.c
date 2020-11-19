/*for•¶‚ğg‚Á‚Ä5‚ÌŠKæ‚ğ‹‚ß‚é‰Û‘è*/
#include <stdio.h>

void main(void){
    int i;
    int k;

    k = 1;

    for ( i = 1; i <= 5; i++)
    {
        k = i * k ;
    }
    
    //i=6‚É‚È‚Á‚Ä‚©‚çfor•¶‚ğ”²‚¯‚é‚Ì‚ÅA•\¦‚Ì“s‡ã‚±‚±‚Åi‚©‚ç1‚ğˆø‚­
    i = i - 1;

    printf("%d‚ÌŠKæ‚Í", i);
    printf("%d‚Å‚·", k);
}