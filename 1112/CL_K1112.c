/*入力された鉛筆の本数に対して*/
/*「ほん」か「ぽん」か「ぼん」かを返すプログラム*/
/*int型の変数pencilに0がはいったら専用のエラーメッセージを返す*/
#include <stdio.h>

void main(void) {
    int pencil;
    printf("鉛筆の本数を入力してください：");
    scanf("%d",&pencil);

    if(pencil == 0){
        /*0が入力された時専用のエラーメッセージを表示*/
        printf("エラー：数えられません");
    }else{
        /*int型の変数pを新たに宣言し、そこに*/
        /*変数pencilの値を10で割った余り=下一桁の数字を格納し、*/
        /*pに入った値によって分岐するswitch文でprinf*/
        /*必要ないかもしれないが念のためdefaultも設定。*/
        int p = pencil % 10;
        switch (p){
        case 2:case 4:case 5:case 7:case 9:
            printf("鉛筆は%dほんです。\n", pencil);
            break;

        case 0:case 1:case 6:case 8:
            printf("鉛筆は%dぽんです。\n", pencil);
            break;
            
        case 3:
            printf("鉛筆は%dぼんです。\n", pencil);
            break;
            
        default:
            break;
        }
    }
}