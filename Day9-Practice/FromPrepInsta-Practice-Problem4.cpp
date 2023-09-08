//number is even or odd in c/c++
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    if(number % 2 == 0){
        cout<<"The entered number is even..";
    }else{
        cout<<"The entered number is odd..";
    }
    
    return 0;
    
}