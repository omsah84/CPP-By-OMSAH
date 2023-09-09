//sum of digits of a number
#include<iostream>
using namespace std;

//sum of digits function
int findSum(int number){

    int sum = 0;
    while(number !=0){
        int lastDigit = number %10;
        number = number /10;
        sum +=lastDigit;
    }
    return sum;
}

//driver code
int main(){
    int number;

    //input from user
    cout<<"Enter a number: ";
    cin>>number;

    //to get sum of digits
    int sum = findSum(number);

    //to display sum of digits of given number
    cout<<"The sum of digits of a number is ";
    cout<<sum;
    
    return 0;
}