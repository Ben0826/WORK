//11430090 李郁賓
#include <iostream>
using namespace std;

void plus1(double num1, double num2, double &result);
void minus1(double num1, double num2, double &result);
void multiply(double num1, double num2, double &result);
void division(double num1, double num2, double &result);

int main()
{ 
    int num1=10, num2=2;
    double result = 0;

   plus1(num1, num2, result);
    cout << num1 << " + " << num2 << " = " << result << endl;

    minus1(num1, num2, result); 
    cout << num1 << " - " << num2 << " = " << result << endl;

    multiply(num1, num2, result);
    cout << num1 << " * " << num2 << " = " << result << endl;

    division(num1, num2, result);
    cout << num1 << " / " << num2 << " = " << result << endl;

    return 0;
}

void plus1(double num1, double num2, double &result)
{
    result = num1 + num2;
}

void minus1(double num1, double num2, double &result)
{
    result = num1 - num2;
}

void multiply(double num1, double num2, double &result)
{
    result = num1 * num2;
}

void division(double num1, double num2, double &result)
{
    result = num1 / num2;
}