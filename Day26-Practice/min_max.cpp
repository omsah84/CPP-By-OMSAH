#include <iostream>
#include <limits.h>
using namespace std;

int min_num(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
            mini = arr[i];
    }
    return mini;
}

int max_num(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int A[] = {4, 9, 6, 5, 2, 3};
    int n = 6;
    cout << "Minimum element is: " << min_num(A, n) << endl;
    cout << "Miximum  element is: " << max_num(A, n) << endl;
}