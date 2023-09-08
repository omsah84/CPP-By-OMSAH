//first N natural Numbers in c++

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the N Natural Numbers:";
    cin>>n;

    int i = 1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
    return 0;
}