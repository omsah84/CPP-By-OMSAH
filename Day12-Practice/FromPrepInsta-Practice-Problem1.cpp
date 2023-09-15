// Print first N natural number in reverse order

#include <iostream>
using namespace std;


int main(){

    int number;

    cout<<"Enter the number: ";
    cin>>number;

    cout<<"The N natural number in reverse order is: ";
    for(int i= number ;i>=1;i--){
        cout<<i<<" ";
    }
    
    return 0;
}
