/*���͂��ꂽ���M�̖{���ɑ΂���*/
/*�u�ق�v���u�ۂ�v���u�ڂ�v����Ԃ��v���O����*/
/*int�^�̕ϐ�pencil��0���͂��������p�̃G���[���b�Z�[�W��Ԃ�*/
#include <stdio.h>

void main(void) {
    int pencil;
    printf("���M�̖{������͂��Ă��������F");
    scanf("%d",&pencil);

    if(pencil == 0){
        /*0�����͂��ꂽ����p�̃G���[���b�Z�[�W��\��*/
        printf("�G���[�F�������܂���");
    }else{
        /*int�^�̕ϐ�p��V���ɐ錾���A������*/
        /*�ϐ�pencil�̒l��10�Ŋ������]��=���ꌅ�̐������i�[���A*/
        /*p�ɓ������l�ɂ���ĕ��򂷂�switch����prinf*/
        /*�K�v�Ȃ���������Ȃ����O�̂���default���ݒ�B*/
        int p = pencil % 10;
        switch (p){
        case 2:case 4:case 5:case 7:case 9:
            printf("���M��%d�ق�ł��B\n", pencil);
            break;

        case 0:case 1:case 6:case 8:
            printf("���M��%d�ۂ�ł��B\n", pencil);
            break;
            
        case 3:
            printf("���M��%d�ڂ�ł��B\n", pencil);
            break;
            
        default:
            break;
        }
    }
}