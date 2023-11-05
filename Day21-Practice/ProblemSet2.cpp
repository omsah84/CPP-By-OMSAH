
#include <iostream>
using namespace std;

int main()
{
    int n =8;
    int arr[n]={ 4 ,5, 0, 1 ,9, 0 ,5 ,0};

    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    int arrnew[n];
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt++;
        }
    }


    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arrnew[j] = arr[i];
            j++;
        }
    }


    for (int i = j ; i < n; i++)
    {
        arrnew[i] = 0;
    }

    cout << "The new Value is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arrnew[i] << " ";
    }

    return 0;
}