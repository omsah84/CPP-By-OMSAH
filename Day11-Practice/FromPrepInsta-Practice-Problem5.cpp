//to check prime number or not
#include<iostream>
using namespace std;

//to check is it prime number or not
bool isPrimeNumber(int number){

    for(int i = 2;i<number ;i++){
        if(number % i == 0){
            return 0;
            break;
        }
    }

    return 1;
}

//drive code
int main(){
    int number;

    //take input from user
    cout<<"Enter a number: ";
    cin>>number;

    if(isPrimeNumber(number)){
        cout<<"Entered number is prime number..";
    }else{
        cout<<"Entered number is not a prime number..";
    }

    return 0;
}