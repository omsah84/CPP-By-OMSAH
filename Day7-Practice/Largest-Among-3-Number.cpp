//c++ program to find largest among 3 number

#include<iostream>
using namespace std;

int check_largest_number(int a, int b, int c){

    // return (a>b>c)?(a):((b>c>a)?(b):(c)):(c));
    if(a>=b && a>=c){
        return a;
    }else if(b>=c && b>=a){
        return b;
    }else{
       return c;
    }
}

//driver code
int main(){
    int a,b,c;

    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"Enter the third number: ";
    cin>>c;


    int largNum= check_largest_number(a,b,c);
    cout<<"The largest number is: ";
    cout<<largNum;
    
    return 0;
}