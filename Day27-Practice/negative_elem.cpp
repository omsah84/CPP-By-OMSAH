#include <bits/stdc++.h>
using namespace std;

void negArr(int *arr, int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (arr[start] <= 0 && arr[end] <= 0)
        {
            start++;
        }
        else if (arr[start] >= 0 && arr[end] >= 0)
        {
            end--;
        }
        else if (arr[start] >= 0 && arr[end] <= 0)
        {
            swap(arr[start], arr[end]);
        }
        else
        {
            start++;
            end--;
        }
    }
}

int main()
{
    int size = 8;
    int arr[size] = {1, 2, 4, -1, -4, 3, -1, 0};
    cout << "original arr: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    negArr(arr, size);
    cout << endl
         << "sorted arr: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}