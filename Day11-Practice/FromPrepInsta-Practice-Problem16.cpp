// N power of a number
#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = a;

    if (b == 0)
        return 1;

    if (a == 0)
        return 0;

    for (int i = 1; i < b; i++)
    {
    ans = ans * a;
    }

    return ans;

}

int main()
{
    int num, exp;

    cout << "Enter value: ";
    cin >> num >> exp;

    int result = power(num, exp);

    cout << "The power " << num << " to " << exp << " is " << result << endl;

    return 0;
}