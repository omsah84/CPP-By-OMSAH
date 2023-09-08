//round off number in c/c++
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float var1, var2;

    var1 = 34.49;
    var2 = 5.3;

    cout<<ceil(var1)<<endl;
    cout<<floor(var1)<<endl;

    cout<<fixed<<setprecision(3)<<round(var1)<<endl;
    
    return 0;
}