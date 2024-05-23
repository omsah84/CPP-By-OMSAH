#include<iostream>
using namespace std;

int add_two_number(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"Enter the two number: "<<a<<" "<<b<<endl;
    cout<<add_two_number(a,b);
    return 0;
}