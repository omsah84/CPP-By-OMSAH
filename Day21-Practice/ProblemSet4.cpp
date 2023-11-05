#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    // int arr[n] ={2,8,7,9,10};
    int arr[n] = {7,2,8,4,9};

    int cnt = 1;
    int pre = arr[0];

    for(int i = 1;i<n;i++){
        if(arr[i] > pre){
            cnt++;
            pre = arr[i];
        }
    }

    cout<<cnt;
}