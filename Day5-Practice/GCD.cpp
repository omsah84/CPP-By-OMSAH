#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;

    cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    if (num1 == 0)
    {
        cout << "The GCD is: " << num2;
    }
    else if (num2 == 0)
    {
        cout << "The GCD is: " << num1;
    }
    else
    {

        int smallest = (num1 < num2) ? num1 : num2;
        int gcd = 1;
        // cout<<smallest;
        for (int i = 1; i < smallest; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                gcd = i;
            }
        }

        cout << "The GCD is: " << gcd;
    }

    return 0;
}