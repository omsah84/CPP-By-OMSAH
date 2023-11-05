#include<iostream>
using namespace std;

int maxNumber( int* arr){
    int ans=arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    return ans;

}

int minNumber( int* arr){
    int ans = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1;i<n;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
    int arr1[]= {9,7,2,8,4,0};
    int minNum = minNumber(arr1);
    int maxNum = maxNumber(arr1);
    cout<<"The minimum number is: "<<minNum<<endl;
    cout<<"The maximum number is: "<<maxNum<<endl;
    return 0;
}