#include <bits/stdc++.h>
using namespace std;


void sortArr(int *arr, int size)
{
    int zero = 0;
    int one = 0;
    int two = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] == 1)
            one++;
        else
            two++;
    }

    for (int i = 0; i < size; i++)
    {
        if (zero > 0)
        {
            arr[i] = 0;
            zero--;
        }

        else if (one > 0)
        {
            arr[i] = 1;
            one--;
        }

        else
        {
            arr[i] = 2;
            two--;
        }
    }
}

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size = 10;
    int arr[size] = {1, 0, 0, 2, 2, 1, 0, 2, 1, 0};
    sortArr(arr, size);
    printArr(arr, size);
    return 0;
}