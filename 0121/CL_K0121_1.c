/*���Ɏ����d�l�̃��[�U��`�֐��ƁA�֐��̓�����m�F����main�֐�������CL_K0121.c���쐬���Ȃ����B

�֐����Fswap
����  �F�i��1�����jint�^�|�C���^�C�i��2�����jint�^�|�C���^
�ԋp�l�F�Ȃ��ivoid�^�j
�@�\�@�F��1�����������l�Ƒ�2�����������l���������郆�[�U��`�֐��ł���B

����m�F���s��main�֐��ł�2��int�^�ϐ���錾����B
�L�[�{�[�h����e�ϐ��ɐ����l����͂����Ă���Aswap�֐������s������A2�̕ϐ��̒l��\��������B
*/

#include <stdio.h>

void swap(int *px, int *py); //�������Ƒ����������ւ���֐�

void main(void)
{
    int x;
    int y;

    printf("���� X ����͂��Ă��������F");
    scanf("%d", &x);

    printf("���� Y ����͂��Ă��������F");
    scanf("%d", &y);

    swap(&x, &y); //�Q�Ɠn��

    printf("X �� Y �����ւ��܂���\n");
    printf(" X = %d, Y = %d", x, y);
}

void swap(int *px, int *py)
{
    int toY = *px;
    *px = *py;
    *py = toY;
}