//sum of first N natural number
#include<iostream>
using namespace std;

int main(){
    int number;
    int sum = 0;

    cout<<"Enter the number: ";
    cin>>number; 

    int i = 1;
    while (i<=number)
    {
        sum +=i;
        i++;
    }
    cout<<"The sum of N natural number is: "<<sum<<endl;
    
    
    return 0;
}