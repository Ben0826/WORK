#include <iostream>  //11430090李郁賓
#include <algorithm>
#include <vector>

void inputValues(std::vector<double> &arr) {
    std::cout << "請輸入10個浮點數，按 Enter 鍵確認每個值：\n";
    for (int i = 0; i < 10; ++i) {
        double value;
        std::cin >> value;
        arr.push_back(value);
    }
}

void sortAscending(std::vector<double> &arr) {
    std::sort(arr.begin(), arr.end());
}

void sortDescending(std::vector<double> &arr) {
    std::sort(arr.begin(), arr.end(), std::greater<double>());
}

void printValues(const std::vector<double> &arr) {
    for (double value : arr) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<double> values;
    values.reserve(10);

    inputValues(values);

    std::vector<double> ascending = values;
    sortAscending(ascending);
    std::cout << "正向排序結果：\n";
    printValues(ascending);

    std::vector<double> descending = values;
    sortDescending(descending);
    std::cout << "逆向排序結果：\n";
    printValues(descending);

    return 0;
}
