//check if leap year or not
#include<iostream>
using namespace std;

//to check is it leap year or not
bool isLeapYear(int year){
    if((year%4==0 && year%100 !=0) || year%400 == 0){
        return 1;
    }
    return 0;
}

int main(){
    unsigned int year;

    cout<<"Enter the year: ";
    cin>>year;

    if(isLeapYear(year)){
        cout<<"The given year is leap year..";
    }else{
        cout<<"The given year is not a leap year..";
    }
    
    return 0;
}