//11430090李郁賓
#include <iostream>
using namespace std;

int main() {
    const int NUM_STUDENTS = 3;
    int scores[NUM_STUDENTS];
    int sum = 0;
    double average;
    
    // 輸入3位學生的成績
    cout << "Please input 3 students score:" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cin >> scores[i];
    }
    
    // 輸出位置及成績（使用回圈）
    cout << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << scores[i] << "_" << scores[i] << "_" << scores[i] << endl;
    }
    
    // 計算平均成績
    for (int i = 0; i < NUM_STUDENTS; i++) {
        sum += scores[i];
    }
    average = sum / (double)NUM_STUDENTS;
    
    // 判斷及格與否（≥70分及格）
    if (average >= 70) {
        cout << "Ans=" << (int)average << "(Pass)" << endl;
    } else {
        cout << "Ans=" << (int)average << "(Fail)" << endl;
    }
    
    return 0;
}
