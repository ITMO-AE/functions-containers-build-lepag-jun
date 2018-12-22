#include <iostream>

using namespace std;

int Factorial(int n)
{
    if(n <= 0)
        return 1;
    else
        return n * Factorial(n - 1);
}

int main()
{
    int n;
    cout << "Введите число для вычисления факториала: ";
    cin >> n;
    cout << "Факториал для числа " << n << " = " << Factorial(n) << endl;
    return 0;
}
