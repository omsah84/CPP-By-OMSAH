#include<bits/stdc++.h>
using namespace std;
void show(int arr[], int n){for(int i = 0;i<n;i++)cout<<arr[i] <<" ";}
int main()
{
    int arr[] = {4,7,4,7,2,9,6,0,3,7};
    int asize = sizeof(arr)/sizeof(arr[0]);\
    cout<<"before sorted arrary..\n";
    for(int i =0;i<asize;++i)cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr,arr+asize,greater<void>());
    show(arr,asize);
    
    return 0;
}

