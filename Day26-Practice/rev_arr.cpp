#include <iostream>
using namespace std;

void reverse_arr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {   
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print_arr(int arr[], int size){
    for(int  i  =0;i<size;i++){
        cout<<arr[i]<< " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    reverse_arr(arr,size);
    print_arr(arr,size);
}