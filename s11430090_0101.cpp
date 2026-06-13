#include <iostream>
using namespace std;

int main()
{
    int num[5][4] = {
        {50, 50, 50, 10},   // 學生1 四次小考成績
        {100, 100, 20, 30},// 學生2
        {20, 50, 20, 30},  // 學生3
        {50, 10, 20, 30},  // 學生4
        {10, 60, 20, 30}   // 學生5
    };

    float avg, sum;

    cout << "姓名\t小考1成績\t小考2成績\t小考3成績\t小考4成績\t總分成績\t平均成績\t是否通過" << endl;

    for (int i = 0; i < 5; i++) // 5位學生
    {
        sum = 0;
        cout << "學生" << i + 1 << "\t";

        for (int j = 0; j < 4; j++)
        {
            cout << num[i][j] << "\t\t";
            sum = sum + num[i][j];
        }

        avg = sum / 4.0; // 計算平均
        cout << sum << "\t\t" << avg << "\t";

        if (avg >= 60.0)
            cout << "Yes" << endl; // 顯示及格
        else
            cout << "No" << endl;  // 顯示不及格
    }

    // 計算小考的總分與平均
    float testSum[4] = {0};

    for (int j = 0; j < 4; j++) // 計算每次小考總分
    {
        for (int i = 0; i < 5; i++) // 5位學生
        {
            testSum[j] += num[i][j];
        }
    }

    cout << "\n小考總分:\t";
    for (int j = 0; j < 4; j++)
    {
        cout << testSum[j] << "\t";
    }
    cout << endl;

    cout << "小考平均:\t";
    for (int j = 0; j < 4; j++)
    {
        cout << testSum[j] / 5.0 << "\t";
    }
    cout << endl;

    return 0;
}
