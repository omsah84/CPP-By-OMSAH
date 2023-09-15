//sum of number in  a given range
#include<iostream>
using namespace std;

int sumofNum(int start , int end){
    int sum =0;

    for(int i = start;i<=end;i++){
        sum +=i; // sum = sum + i;
    }

    return sum;
}

int main(){
    //start and end

    int start,end;

    cout<<"Enter the value: ";
    cin>>start>>end;

    int sumAns = sumofNum(start,end);

    cout<<"The sum of number in a given range is: "<<sumAns;
    
    return 0;
}
