#include <iostream>
using namespace std;
int sumofprimenumber(int num)
{
    int ans = 0;
    for (int j = 2; j <= num; j++)
    {
        int flag = 0;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                flag = 1;
            }
        }

        if (flag == 0)
        {
            ans += j;
        }
    }

    return ans;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int sum = sumofprimenumber(num);
    cout << "The sum of prime number is: ";
    cout << sum;

    return 0;
}