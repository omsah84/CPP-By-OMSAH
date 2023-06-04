#include<iostream>
using namespace std;

int main(){

    int num;
    cin >> num;

    if(num > 0){
        cout<<"Positive..";

    }
    else{
        if(num==0){
            cout << "Given number is zero..";
        }
        else{
            cout << "Given number is negative..";
        }
    }

    return 0;
}