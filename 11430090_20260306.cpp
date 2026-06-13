//11430090 李郁賓
#include <iostream> // 引入輸入輸出標頭
#include <iomanip>  // 引入格式化輸出（setw）
using namespace std; // 使用 std 命名空間

int main() { // 程式進入點
    int num;
    cout << "請輸入最大數字（正整數）：";
    if (!(cin >> num) || num <= 0) {
        cerr << "輸入錯誤，請輸入正整數。\n";
        return 1;
    }

    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= num; ++j) {
            cout << setw(2) << i << "*" << setw(2) << j << "=" << setw(2) << i * j << " | ";
        }
        cout << endl; // 每完成一行乘法表後換行
    }
    return 0; // 程式結束
}