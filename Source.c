#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int number[100] = {0}; // �]�w�@�Ӥ����ƶq��100���uint�v�}�C
    int amount = 0; // ��J���Ʀr�ƶq�A�P�ɭݨ�}�C��������m
    for (amount = 0; amount < 100; amount += 1) {
        int test = scanf("%d", &number[amount]); // ��J�Ʀr
        // ��J�uEOF�v�ɡA�N���J����
        if (test == EOF) {
            break;
        }
    }

    // �i�����
    int seat = amount - 1; // �ѫ᩹�e�A��l�Ƭ��u�̫᪺������m�v 
    int element = 0;  // �ѫe����A��l�Ƭ��u�Ĥ@�Ӥ�����m�v
    for (element = 0; element < seat; element += 1) {
        // �N�۹������Ʀr�i��洫 
        int test = number[element];
        number[element] = number[seat];
        number[seat] = test;

        seat -= 1; // �U�@�Ӧ�m 
    }

    // ��ܤ���᪺�}�C
    for (element = 0; element < amount - 1; element += 1) {
        printf("%d ", number[element]);
    }
    printf("%d\n", number[amount - 1]);

    return 0;

}