#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    if(n==0 || n == 1){
        cout << "The given number is not prime number..";
        return 0;
    }
    int flag = 0;
    for (int i = 2; i < n;i++){
        if(n%i==0){
            flag = 1;

        }
    }

    if(flag ==0){
        cout << "This is prime number.";
    }
    else{
        cout << "The given number is not prime number..";
    }
    
}