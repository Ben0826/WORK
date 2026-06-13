#include <stdio.h>
#include <string.h>

int main() {
    char id[20];

    // 讀取身分證字號字串，假設輸入格式正確，不含空白
    scanf("%s", id);

    // 身分證英文字母與對應數值的對照表，A~Z 分別對應陣列 index 0~25
    int code[26] = {
        10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21,
        22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33
    };

    // 取得首字母對應的陣列索引
    int letter = id[0] - 'A';
    // 取得首字母對應的兩位數數值
    int num = code[letter];

    // 第一位數字與第二位數字拆成 x1, x2
    int x1 = num / 10;
    int x2 = num % 10;

    int sum = 0;
    // 計算首字母數值的加權部分：第一位數值乘以 1，第二位數值乘以 9
    sum += x1;
    sum += x2 * 9;

    // 計算身分證數字 1~8 的加權總和
    for (int i = 1; i <= 8; i++) {
        sum += (id[i] - '0') * (9 - i);
    }

    // 最後一位數字不加權，直接相加
    sum += (id[9] - '0');

    // 若總和能被 10 整除，則為正確身分證號
    if (sum % 10 == 0)
        printf("CORRECT!!!\n");
    else
        printf("WRONG!!!\n");

    return 0;
}