#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    // int arr[n] = {1,5,6,0,7,8,0,1,0};
    int arr[n] = {2,3,0,4,8,11,1,17};

    int s = 0;
    int e = n-1;
    
    while (s<=e)
    {
        if(arr[s] !=0 && arr[e] !=0 && s<=e){
            s++;
        }

        else if(arr[s] ==0 && arr[e] ==0 && s<=e){
            e--;
        }
        
        else if(arr[s] == 0 && arr[e] !=0 && s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }


    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}