// index 
// �z��̒�������͂����l�̔z����̓Y������Ԃ��v���O����
#include <stdio.h>

// n��x�Ɣz��������ɔz����̗v�f����Ԃ��֐�
int iindex(int n, int a[], int x) {
  int i ,result = -1;
  for(i = 0; i < n; ++i) {
    if(a[i] == x ) { result = i; }
  }
  return result ;
}

// main�֐���������
int main(void) {
  //�ϐ��̐錾
  double n, x;
  int a[24] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};

  // �l�����
  printf("n> "); scanf("%lf", &n);
  printf("x> "); scanf("%lf", &x);

  //�ϐ�r��錾���A�����Ɋ֐�iindex���Ăяo��
  int r = iindex(n, a, x);

  // ���ʂ��o��
  printf("result = %d\n", r);
  return 0;
}