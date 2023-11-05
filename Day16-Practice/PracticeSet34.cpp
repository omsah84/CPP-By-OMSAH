#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter the input value: "<<endl;
    cin>>n;

    // //finding the bits
    int l = log2(n) +1;

    // //finding the xor value 
    int p = pow(2,l)-1;

    // //output 
    cout<<(n^p);


    // cout<<(2<<1);
    
    
    return 0;
}