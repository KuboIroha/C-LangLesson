/*種別と人数を入力すると金額を計算して返すプログラム*/
/*種別0が一般で1800円*/
/*種別1が学生で1500円*/
/*種別2が子供で1000円*/
/*種別に-1が入力されるとループを終了して合計を出力*/
#include <stdio.h>

int goukei;
int ippan;
int gakusei;
int kids;

goukei = 0;
ippan = 1800;
gakusei = 1500;
kids = 1000;

void main(void)
{
    int syubetu;
    int ninzuu;

    syubetu = 999;
    while (syubetu != -1)
    {
        printf("種別を入力（終了は-1）：");
        scanf("%d", &syubetu);
    
        if (syubetu >= 0 && syubetu <= 2)
        {
            printf("人数を入力：");
            scanf("%d", &ninzuu);
            keisan(syubetu, ninzuu);
        }
        else if (syubetu != -1) //異常値が入力された時の処理
        {
            printf("種別値には-1～2までの値を入力してください\n");
        }
        
    }
    printf("本日の売上：%d円", goukei);
}

//合計料金の計算
void keisan(int zokusei, int kazu){
    switch (zokusei)
    {
    case 0:
        //一般料金の計算
        goukei = goukei + ippan * kazu;
        break;

    case 1:
        //学生料金の計算
        goukei = goukei + gakusei * kazu;
        break;

    case 2:
        //子供料金の計算
        goukei = goukei + kids * kazu;
        break;
    
    default:
        break;
    }
}