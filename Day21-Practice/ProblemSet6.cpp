#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int len = str.length();
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;

    if (len > 6)
    {
        for (int i = 0; i < len; i++)
        {
            if (char(str[i]) >= '0' && char(str[i]) <= '9')
            {
                c1++;
            }
            else if (char(str[i]) >= 'a' && char(str[i]) <= 'z')
            {
                c2++;
            }       else if (char(str[i]) >= 'A' && char(str[i]) <= 'Z')
            {
                c3++;
            }
            else if ((char(str[i]) == '!') || (char(str[i]) == '@') || (char(str[i]) == '#') || (char(str[i]) == '$') || (char(str[i]) == '%') || (char(str[i]) == '^') || (char(str[i]) == '&') || (char(str[i]) == '*') || (char(str[i]) == '(') || (char(str[i]) == ')'))
            {
                c4++;
            }
        }
        if (c1 > 0 && c2 > 0 && c3 > 0 && c4 > 0)
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
    else
    {
        cout << "0";
    }
}