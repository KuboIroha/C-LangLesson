//xとyに数字を入力して大きい方の数字を出力するプログラム
//max
#include <stdio.h>

double max(int x, int y) {
  //宣言部
  int m;

  //ここから条件分岐
  if(x > y) {
    //x > yなら変数mにxを格納
    m = x; //ここの;が抜けてた
      } else {
    //それ以外ならmにyを格納
    m = y; //ここの;もぬけてたよ
      };
  
  //mをmainに返す
  return m;
}

int main(void) {
  //変数宣言部
  int x, y;

  //xを入力
  printf("x> "); scanf("%d", &x);

  //yを入力
  printf("y> "); scanf("%d", &y);
  //max(x,y); たぶんここいらない

  //結果を表示
  printf("max = %20g\n", max(x,y));
  //return 0; ここのリターン処理は...何？
}