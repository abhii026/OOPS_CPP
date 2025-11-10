#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int sumOfDigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sumOfDigit(n / 10);
}
int reverseOfDigit(int n)
{
    int rev = 0;
    int temp = n;
    while (temp > 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    return rev;
}
int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int res = sumOfDigit(n);
    int x;
    cout << "Enter number(fact): ";
    cin >> x;
    cout << "Sum of digits is: " << res << endl;
    cout << "Factorial is: " << fact(x) << endl;
    int revres = reverseOfDigit(n);
    cout << "Reverse of Number is: " << revres << endl;
    return 0;
}