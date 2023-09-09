//sum of number in a given range
#include<iostream>
using namespace std;

int main(){
    int start, end;
    int sum = 0;

    cout<<"Enter the starting number: ";
    cin>>start;

    cout<<"Enter the ending number: ";
    cin>>end;

    while (start<=end)
    {
        sum +=start;
        start++;
    }

    cout<<"The sum of given range is "<<sum<<endl;
    
    
    return 0;
}