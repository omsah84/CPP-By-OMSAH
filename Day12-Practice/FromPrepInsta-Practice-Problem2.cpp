//sum of first N natural numbers
#include<iostream>
using namespace std;

int sumofNat(int num){
    int sum =0;
    
    for(int i = 1;i<=num;i++){
        sum += i;  //sum = sum + i
    }

    return sum;
}
`
int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    int sum = sumofNat(n);

    cout<<"The sum of N natural number is: "<<sum<<endl;
    
    return 0;
}