#include<iostream> //11430090李郁賓
using namespace std;

// 基礎級數求和(Summation): Sum(n) = Σ i² (i=1 to n)
double Sum(int n) {
    double sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

// 連乘連算(Product): Product(n) = ∏ (2i - 1) (i=1 to n)
double Product(int n) {
    double product = 1;
    for(int i = 1; i <= n; i++) {
        product *= (2 * i - 1);
    }
    return product;
}

// 次方與級數求和(Power & Summation): fun(x,n) = Σ x^i / i (i=1 to n)
double fun(double x, int n) {
    double result = 0;
    double power = x;  // x^1
    for(int i = 1; i <= n; i++) {
        result += power / i;
        power *= x;  // 更新到 x^(i+1)
    }
    return result;
}

// 計算組合數：C(n,k) = n! / (k!(n-k)!)
double Combination(int n, int k) {
    if(k > n) return 0;
    if(k == 0 || k == n) return 1;
    
    // 計算n!
    double nFactorial = 1;
    for(int i = 1; i <= n; i++) {
        nFactorial *= i;
    }
    
    // 計算k!
    double kFactorial = 1;
    for(int i = 1; i <= k; i++) {
        kFactorial *= i;
    }
    
    // 計算(n-k)!
    double nkFactorial = 1;
    for(int i = 1; i <= (n - k); i++) {
        nkFactorial *= i;
    }
    
    return nFactorial / (kFactorial * nkFactorial);
}

int main() {
    cout << "===== 函數計算結果 =====" << endl;
    
    // 測試 Sum 函數
    int n = 5;
    cout << "\n1. 基礎級數求和 Sum(" << n << "):" << endl;
    cout << "   Sum(" << n << ") = " << Sum(n) << endl;
    
    // 測試 Product 函數
    cout << "\n2. 連乘連算 Product(" << n << "):" << endl;
    cout << "   Product(" << n << ") = " << Product(n) << endl;
    
    // 測試 fun 函數
    double x = 0.5;
    int m = 5;
    cout << "\n3. 次方與級數求和 fun(" << x << ", " << m << "):" << endl;
    cout << "   fun(" << x << ", " << m << ") = " << fun(x, m) << endl;
    
    // 測試 Combination 函數
    int n1 = 5, k = 2;
    cout << "\n4. 組合數 C(" << n1 << ", " << k << "):" << endl;
    cout << "   C(" << n1 << ", " << k << ") = " << Combination(n1, k) << endl;
    
    return 0;
}
