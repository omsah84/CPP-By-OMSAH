//c++ program to check even or odd integers
#include<iostream>
using namespace std;

bool isEven(int n){
    return (n%2 == 0);
}
    
//driver code
int main(){

    int num;

    cout<<"Enter the number: ";
    cin>>num;


    if(isEven(num)){
        cout<<"The entered number is even.";
        
    }
    else{
        cout<<"The entered number is odd.";
    }

    return 0;
}