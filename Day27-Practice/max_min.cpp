#include <iostream>
using namespace std;

void max_min(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];

    int i = 1;
    int j = size - 1;

    while (i < j)
    {
        if (arr[i] >= arr[j])
        {
            max = arr[i];
            min = arr[j];
        }
        else
        {
            max = arr[j];
            min = arr[i];
        }

        i++;
        j--;
    }

    cout << max << endl;
    cout << min << endl;
}

int main()
{
    int size = 5;
    int arr[size] = {2, 11, 110, 0, 6};

    max_min(arr, size);

    return 0;
}