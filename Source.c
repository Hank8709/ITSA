#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int number[100] = {0}; // 設定一個元素數量為100的「int」陣列
    int amount = 0; // 輸入的數字數量，同時兼具陣列的元素位置
    for (amount = 0; amount < 100; amount += 1) {
        int test = scanf("%d", &number[amount]); // 輸入數字
        // 輸入「EOF」時，代表輸入結束
        if (test == EOF) {
            break;
        }
    }

    // 進行反轉
    int seat = amount - 1; // 由後往前，初始化為「最後的元素位置」 
    int element = 0;  // 由前往後，初始化為「第一個元素位置」
    for (element = 0; element < seat; element += 1) {
        // 將相對應的數字進行交換 
        int test = number[element];
        number[element] = number[seat];
        number[seat] = test;

        seat -= 1; // 下一個位置 
    }

    // 顯示反轉後的陣列
    for (element = 0; element < amount - 1; element += 1) {
        printf("%d ", number[element]);
    }
    printf("%d\n", number[amount - 1]);

    return 0;

}