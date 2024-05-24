#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> minhep;
    int size = 7;
    int arr[size] = {2, 5, 6, 7, 3, 4, 8};
    int k = 3;

    for (int i = 0; i < size; i++)
    {
        if (minhep.size() < k)
        {
            minhep.push(arr[i]);
        }
        else
        {
            minhep.pop();
            minhep.push(arr[i]);
        }
    }

    cout << minhep.top() << endl;
    return 0;
}