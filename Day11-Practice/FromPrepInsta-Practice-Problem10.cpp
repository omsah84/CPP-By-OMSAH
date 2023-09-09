// HCF/GCD of two number
#include <iostream>
using namespace std;

// hcf function
int hcf(int num1, int num2)
{
    int number = num1;
    if (num1 > num2)
    {
        number = num2;
    }
    else
    {
        number = num1;
    }

    int hc = 1;
    for (int i = 1; i < number; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hc = i;
        }
    }
    return hc;
}

// drive code
int main()
{
    int number1, number2;

    // input from user
    cout << "Enter a first number: ";
    cin >> number1;

    cout << "Enter a second number: ";
    cin >> number2;

    int ans = hcf(number1, number2);
    cout << "The HCF number is " << ans;

    return 0;
}