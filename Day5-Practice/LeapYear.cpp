#include<iostream>
#include<cmath>
using namespace std;

bool isLeapYear(int year){

    int value = year % 4;

    if(value == 0){
        // cout<<year;
        if(year% 100 == 0 && year % 400 ==0){
            return true;
        }
        return false;
    }

    return false;
}

int main(){
   //getting year

   cout<<"Enter the Year: ";
   int year;
   cin>>year;

   if(isLeapYear(year)){
    cout<<"The given year is Leap year..";
   }
   else{
    cout<<"The given year is not Leap year..";
   }



    
    return 0;
}