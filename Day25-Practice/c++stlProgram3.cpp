// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    float p;
    float year;
    float m;
    float day;
    float r;
    float temp = p;
    cout<<"p year month day r "<<endl;
    cin>>p>>year>>m>>day>>r;
    for(int i = 1;i<=year;i++){
        p = p+ (p*12*r)/100;
        cout<<i<<" year "<<" amount " <<p<<endl;
    }
    p = p + (p*m*r)/100;
    cout<<m<<" month and year "<<" amount " <<p<<endl;

    p = p+(p*(day/30)*r)/100;
    // cout<<"Total amount: "<<p;
    cout<<day<<" day and month and year "<<" amount " <<p<<endl;
    return 0;   
}