//reverse a number
#include<iostream>
using namespace std;

//reverse funtion
int revFun(int number){
    int rev = 0;

    while (number !=0)
    {
        int lastDigit = number %10;
        number = number/10;
        rev  = (rev*10) + lastDigit;
       
    }
    return rev;
}

//driver code
int main(){
    int number;

    //take input from user
    cout<<"Enter a number: ";
    cin>>number;

    int result = revFun(number);

    //display reverse of given number
    cout<<"The sum of digits of a given numbr is "<<result;
    
    return 0;
}