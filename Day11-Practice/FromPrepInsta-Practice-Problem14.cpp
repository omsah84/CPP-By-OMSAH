//implement 1D array
#include<iostream>
using namespace std;

int main(){
    int size;

    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter array element: ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The entered array element is: ";
    for(int i = 0;i<size; i++){
        cout<<arr[i] <<" ";
    }


    
    return 0;
}
