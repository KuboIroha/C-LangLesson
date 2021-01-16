// index 
#include <stdio.h>
int iindex(int n, int a[], int x) {
  int i ,result = -1;
  for(i = 0; i < n; ++i) {
    if(a[i] == x ) { result = i; }
  }
  return result ;
}


int main(void) {
  double n, x;
  printf("n> "); scanf("%lf", &n);
  printf("x> "); scanf("%lf", &x);
  int a[24] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};

  int r = iindex(n, a, x);

  printf("result = %d\n", r);
  return 0;

}