/*for•¶‚Ì—ûK*/

#include <stdio.h>
void main(void) {
    int i;
    printf("ŒJ‚è•Ô‚µ@‚±‚±‚©‚ç\n");
    
    for (i=1; i<=5; i++){
        if( i == 3 )
        {
            continue;
            printf("i‚ª3‚Å‚·‚æ");
            //‚±‚ÌprintfÀs‚³‚ê‚È‚¢‚ñ‚Å‚·‚æ‚Ë
        }
        printf("ŒJ‚è•Ô‚µ%d‰ñ–Ú\n",i);
    }

    printf("ŒJ‚è•Ô‚µ‚±‚±‚Ü‚Å\n");
}