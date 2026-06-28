#include <iostream>//11430090李玉斌
#include <vector>
#include <string>
#include <cstdlib>//產生隨機數(rand 和 srand)
#include <ctime>//確保數字隨機(使用 time(0))
#include <algorithm>//演算法庫(shuffle)打亂順序
#include <random>

using namespace std;

int main() {
    system("chcp 65001 > nul");
    // 初始化隨機數種子
    srand(time(0));

    cout << "=======================================" << endl;
    cout << "幾A幾B 猜數字遊戲！" << endl;
    cout << "規則：請猜一個 4 位數，數字不能重複。" << endl;
    cout << "A 代表數字與位置皆正確；B 代表數字正確但位置錯誤。" << endl;
    cout << "=======================================" << endl;

    // 1. 產生 4 個不重複的隨機數字
    vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    mt19937 g(time(0));//隨機數產生器
    shuffle(numbers.begin(), numbers.end(), g); // 打亂順序
    
    vector<int> answer;
    for (int i = 0; i < 4; i++) {
        answer.push_back(numbers[i]);
    }

    int attempts = 0;
    bool hasWon = false;

    // 2. 遊戲主迴圈
    while (!hasWon) //只要沒猜中就繼續迴圈
    {
        string guess;
        cout << "\n請輸入你猜的 4 位數：";
        cin >> guess;

        // 防呆機制：檢查輸入長度是否為 4
        if (guess.length() != 4) {
            cout << "錯誤：請務必輸入「4 位數字」！" << endl;
            continue;
        }

        // 將輸入的字串轉換成數字陣列
        vector<int> guessDigits(4);
        for (int i = 0; i < 4; i++) {
            guessDigits[i] = guess[i] - '0'; // 字元轉數字
        }

        attempts++;
        int countA = 0;
        int countB = 0;

        // 3. 核心邏輯：比對答案
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (guessDigits[i] == answer[j]) {
                    if (i == j) {
                        countA++; // 數字相同，位置也相同
                    } else {
                        countB++; // 數字相同，但位置不同
                    }
                }
            }
        }

        // 4. 輸出結果
        cout << "💡 提示結果：" << countA << "A" << countB << "B" << endl;

        if (countA == 4) {
            hasWon = true;
            cout << "\n恭喜你答對了！ " << endl;
            cout << "正確答案就是：";
            for (int val : answer) cout << val;
            cout << "\n你總共猜了 " << attempts << " 次。" << endl;
        }
    }

    return 0;
}//手動編譯執行g++ 0613.cpp -o 0613.exe.
///0613.exe