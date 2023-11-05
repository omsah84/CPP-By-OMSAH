#include<iostream>
using namespace std;

int gcd(int a, int b){
    int ans  = 1;
    int n;
    if(a>b){
        n = b;
    }
    else {
        n = a;
    }
    
    for(int i = 1;i<=n;i++){
        if(a%i == 0 && b%i == 0){
            ans = i;
            // cout<<ans<<endl;
        }
    }

    return ans;
}

int main(){

    int l = 16;
    int b = 8;

    int g = gcd(l,b);
    // cout<<g;

    int ans = (l*b)/(g*g);
    cout<<ans;

}