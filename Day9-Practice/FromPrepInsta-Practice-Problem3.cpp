//positive / negative in c++

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;

    if(num>0){
        cout<<"The entered number is positive.";
    }else if(num <0){
        cout<<"The entered number is negative.";
    }else{
        cout<<"The entered numer is zero.";
    }
    
    return 0;
}