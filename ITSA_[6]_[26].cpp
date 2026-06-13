#include <stdio.h>  // 引入標準輸入輸出標頭檔案，用於 scanf 和 printf 函數

int main() {  
    int month; 

    // 讀取輸入的月份
    // 使用 while 迴圈可以處理多組測試資料（視題目需求而定）
    while (scanf("%d", &month) != EOF) {  // 從標準輸入讀取整數，直到檔案結束（EOF）
        
        // 判斷季節
        if (month >= 3 && month <= 5) {  // 如果月份在 3 到 5 之間，輸出 Spring
            printf("Spring\n");
        } 
        else if (month >= 6 && month <= 8) {  // 如果月份在 6 到 8 之間，輸出 Summer
            printf("Summer\n");
        } 
        else if (month >= 9 && month <= 11) {  // 如果月份在 9 到 11 之間，輸出 Autumn
            printf("Autumn\n");
        } 
        else if (month == 12 || month == 1 || month == 2) {  // 如果月份是 12、1 或 2，輸出 Winter
            printf("Winter\n");
        }
    }

    return 0;
}