/*CLO_02������*/
/*�L�[�{�[�h������͂���������Ɠ������e�̂��̂��A�z��w�Ɋ܂܂�Ă��邩�ǂ����𒲂ׂČ��ʂ�\������v���O����*/
/*�Ȃ��A������̔�r�ɂ́A�W���w�b�_�t�@�C��string.h�Œ�`����Ă��镶�����r�֐�strcmp���g�����ƁB*/
#include <stdio.h>
#include <string.h>

void main(void)
{
    char w[5][10] = {"book",
                     "pen",
                     "desk",
                     "computer",
                     "chair"
                     };
    int i;
    printf("�z�� w�F\n");

    for (i = 0; i < 5; i = i + 1)
    {
        printf("%s\n", w[i]);
    }
}