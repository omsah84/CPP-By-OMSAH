//to check if a number is palindrome or not
#include<iostream>
using namespace std;

//return reverse number
int reverseNum(int number){
    int rev = 0;
    while(number>0){
        int lastDigit = number %10;
        number /= 10;
        rev = rev*10 + lastDigit;
    }
    return rev;
}

//diver code
int main(){
    int number;

    //take input from user
    cout<<"Enter a number: ";
    cin>>number;

    int revNumber = reverseNum(number);

    //check is it palindrome of not
    if(number == revNumber){
        cout<<"The entered number is a palindrome...";
    }else{
        cout<<"The entered number is not a palindrome...";
    }
    
    return 0;
}