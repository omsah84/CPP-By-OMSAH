#include<iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i = n;i>0;i--){
        f = f*i;
    }

    return f;
}

int main(){
    int n = 4;

    int second =2* fact(n-1);
    int ans =second;
    cout<<ans;
    
    
    return 0;
}