//x��y�ɐ�������͂��đ傫�����̐������o�͂���v���O����
//max
#include <stdio.h>

double max(int x, int y) {
  //�錾��
  int m;

  //���������������
  if(x > y) {
    //x > y�Ȃ�ϐ�m��x���i�[
    m = x; //������;�������Ă�
      } else {
    //����ȊO�Ȃ�m��y���i�[
    m = y; //������;���ʂ��Ă���
      };
  
  //m��main�ɕԂ�
  return m;
}

int main(void) {
  //�ϐ��錾��
  int x, y;

  //x�����
  printf("x> "); scanf("%d", &x);

  //y�����
  printf("y> "); scanf("%d", &y);
  //max(x,y); ���Ԃ񂱂�����Ȃ�

  //���ʂ�\��
  printf("max = %20g\n", max(x,y));
  //return 0; �����̃��^�[��������...���H
}