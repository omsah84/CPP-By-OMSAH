//implement 2D array
#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter row and colum: ";
    cin>>row>>col;

    int arr[row][col];
    cout<<"Enter element of array: ";
    for(int i = 0 ;i<row;i++){
        for(int j= 0 ;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Entered element of array: ";
    for(int i = 0 ;i<row;i++){
        for(int  j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    
    return 0;
}