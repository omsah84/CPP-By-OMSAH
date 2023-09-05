#include<iostream>
using namespace std;

int fact(int n){

    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }

    cout<<n<<" "; 
    int ans = n * fact(n-1);
    cout<<n<<" ";
    return ans;

}

int main(){
    int num = 5;
    int ans = fact(num);
    cout<<"The factorial of "<<num<<" is "<<ans<<endl;
    return 0;
}