#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,6> arr = {1,2,3,4,5,6};

    for(int i = 0;i<6;i++){
        cout<<arr.at(i)<< " ";
    }
    cout<<endl;

    cout<<get<0>(arr);

    cout<<endl;

    int &a = arr.front();
    cout<<a<<endl;

    int &b = arr.back();
    cout<<b<<endl;

    for ( auto x: arr)cout<<x<<" ";

    cout<<endl;

    array<int,7> ar;

    ar.fill(9);

    for(auto x: ar) cout<<x<<" ";
    cout<<endl;

    return 0;
}