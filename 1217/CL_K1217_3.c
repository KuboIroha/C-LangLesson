/*
�����Ƃ��ēn���ꂽ�g��height�A�̏dweight ����BMI �w�����v�Z���A������Ăяo�����ɕԂ�calcBMI �֐����`���Ȃ����B
�܂��Amain �֐�����calcBMI �֐����Ăяo���A���s���ʂɎ����悤�ȕ\�����s���v���O�������쐬���Ȃ����B
�Ȃ��ABMI �w���́A�̏d/(�g��/100)^2�Ōv�Z���܂��B
*/

/*calcBMI �֐��̒��ŁA��ʏ�ɕ\������printf �֐����g���Ă͂����܂���B*/

#include <stdio.h>

//BMI�w���v�Z�p�֐�
void calcBMI(double height, double weight, double *BMIsisuu);

//�̌`����p�֐�
void hantei(double BMIsisuu);

//main��������
void main(void)
{
    //�錾��
    double height, weight, BMIsisuu ;

    //��������
    //�g���̓���
    printf("�g������͂��Ă��������F");
    scanf("%lf", &height);

    //�̏d�̓���
    printf("�̏d����͂��Ă��������F");
    scanf("%lf", &weight);

    //�f�o�b�O�p�ɏo��
    //printf("\nheight = %.1f\nweight = %.1f", height, weight);

    //calcBMI�Ăяo��
    calcBMI(height, weight, &BMIsisuu );
    //�f�o�b�O�p�ɕϐ�BMIsisuu���o��
    //printf("BMIsisuu is %.2f",BMIsisuu);

    //���ʏo��
    printf("%.1fcm�A%.1fkg�̂��Ȃ��́ABMI �w��%.2f��", height, weight, BMIsisuu);
    //hantei�Ăяo��
    hantei(BMIsisuu);

}

//BMI�w���̌v�Z�p�֐�
void calcBMI(double height, double weight, double *BMIsisuu)
{
    *BMIsisuu = weight / ((height / 100) * (height / 100));
}

//BMI�w������̌`�𔻒�
void hantei(double BMIsisuu)
{
    if( BMIsisuu < 18.5 )
    {
        printf("�₹�^�ł��B");
    }
    else if ( BMIsisuu >= 18.5 && BMIsisuu < 25.0)
    {
        printf("�W���^�ł��B");
    }
    else if ( BMIsisuu >= 25.0)
    {
        printf("�얞�^�ł��B");
    }
    else
    {
        printf("err at 70");
    }
}