//print prime number in a given range

#include<iostream>
using namespace std;

//to check is it prime number or not
bool isPrimeNumber(int number){
    
    int i = 2;
    while (i<number)
    {
        if(number %i==0){
            return 0;
            break;
        }
        i++;
    }
    return 1;
}

//drive code
int main(){
    int sNumber, eNumber;

    //input from user
    cout<<"Enter starting number: ";
    cin>>sNumber;

    cout<<"Enter ending number: ";
    cin>>eNumber;


    cout<<"Displaying prime number in a given range: ";
    while(sNumber<=eNumber){
        if(isPrimeNumber(sNumber)){
            cout<<sNumber<<" ";
        }
        
        sNumber ++;
    }
    
    return 0;
}