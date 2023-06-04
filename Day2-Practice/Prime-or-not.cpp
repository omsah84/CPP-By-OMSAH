#include<iostream>
using namespace std;

bool isprime(int num){

    if(num ==0 || num ==1 || num<0){
        return 0;
    }
    for (int i = 2; i < num;i++){
        if(num %i==0){
            return false;
        }
    }

    return 1;
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(isprime(num)){
        cout << "The given number is prime.";
    }
    else{
        cout << "The given number is not prime.";
    }

    return 0;
}