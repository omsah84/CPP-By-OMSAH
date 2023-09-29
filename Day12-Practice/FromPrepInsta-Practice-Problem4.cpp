//check if leap year of not

#include<iostream>
using namespace std;

bool isLeapYear(int year){

    if((year%4 == 0 && year%100 == 0) || year%400 == 0){
        return true;
    }
    return false;  
}

int main(){
    // year%4==0 && year%100 !=0 || year%400==0 

    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(isLeapYear(year)){
        cout<<"Yes given year is a leap year..";
    }
    else{
        cout<<"Not given year is not a leap year..";
    }

    
    return 0;
}