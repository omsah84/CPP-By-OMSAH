#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int s = 4;
    string dir = "R";
    int dist = 10;
    int x = 0;
    int y = 0;

    for (int i = 0; i < s; i++)
    {
        if (dir == "R")
        {
            x = x + dist;
            dist = dist + 10;
            dir = "U";
        }
        else if (dir == "U")
        {
            y = y + dist;
            dist = dist + 10;
            dir = "L";
        }
        else if (dir == "L")
        {
            x = x - dist;
            dist = dist + 10;
            dir = "D";
        }
        else if (dir == "D")
        {
            y = y - dist;
            dist = dist + 10;
            dir = "R1";
        }
        else if (dir == "R1")
        {
            x = x + dist;
            dist = dist + 10;
            dir = "R";
        }
    }

    cout << x << " " << y;

    return 0;
}