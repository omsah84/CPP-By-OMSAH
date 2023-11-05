#include <iostream>
using namespace std;

int main()
{
    int a[3];
    int b[3];
    int aP = 0;
    int bP = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }

    for (int i = 0; i < 3; i++)
    {

        if (a[i] > b[i])
        {
            aP++;
        }
        else if (a[i] < b[i])
        {
            bP++;
        }
    }
    cout << "Alice will get " << aP << " points and bob will get " << bP << " points" << endl;

    return 0;
}