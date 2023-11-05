#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{


    // float ans = float(n) / 10;

    // if (ans + 1 == n)
    // {
    //     int c = ceil(ans) + 1;
    //     cout << c;
    // }
    // else
    // {
    //     int c = ceil(ans);
    //     cout << c;
    // }
    // cout<<"one";


    string month = "sat";
    int n = 32;
    int a;

    if(month == "sun"){
        a = 7;
    }
    if(month == "mon"){
        a = 6;
    }
    if(month == "tue"){
        a = 5;
    }
    if(month == "wed"){
        a = 4;
    }
    if(month == "thu"){
        a = 3;
    }
    if(month == "fri"){
        a = 2;
    }
    if(month == "sat"){
        a = 1;
    }


    int total_rem = n-a;
    int rem = total_rem / 7;

    cout<<rem+1;

    return 0;
}