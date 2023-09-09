//print first N natural number in reverse order
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    for(int i = number;i>0;i--){
        cout<<i<<" ";
    }
    
    return 0;
}