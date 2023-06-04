#include<iostream>
using namespace std;

bool isEven(int num){
    if(num%2==0){
        return 1;
    }


        return 0;
}

int main(){
    int num;
    cin >> num;

    if(isEven(num)){
        cout << "The given number is even.";
    }
    else{
        cout << "The given numner is odd.";
    }

    return 0;
}