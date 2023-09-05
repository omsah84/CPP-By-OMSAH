#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }

    int smallerpro= power(n-1);
    int ans = 2 * smallerpro;
    return ans;
}

int main(){
    int n = 2;
    int ans = power(n);
    cout<<"The power of 2 is "<<ans<<endl;
    
    return 0;
}