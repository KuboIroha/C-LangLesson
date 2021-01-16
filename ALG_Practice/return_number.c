// index 
// 配列の中から入力した値の配列内の添え字を返すプログラム
#include <stdio.h>

// nとxと配列を引数に配列内の要素数を返す関数
int iindex(int n, int a[], int x) {
  int i ,result = -1;
  for(i = 0; i < n; ++i) {
    if(a[i] == x ) { result = i; }
  }
  return result ;
}

// main関数ここから
int main(void) {
  //変数の宣言
  double n, x;
  int a[24] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};

  // 値を入力
  printf("n> "); scanf("%lf", &n);
  printf("x> "); scanf("%lf", &x);

  //変数rを宣言し、そこに関数iindexを呼び出し
  int r = iindex(n, a, x);

  // 結果を出力
  printf("result = %d\n", r);
  return 0;
}