//ascii code
#include<iostream>
using namespace std;

int main(){

    //all character and symbols 
    for(int i = 0;i<128 ;i++){
        cout<<char(i)<<" ";
    }
    cout<<endl;

    //only A to Z
    cout<<" A to Z.";
    cout<<endl;
    for(int i = 65;i<65+26;i++){
        cout<<char(i)<<" ";
    }
    

    //only a to z
    cout<<" a to z";
    cout<<endl;

    for(int i = 97;i<97+26;i++){
        cout<<char(i)<<" ";
    }
    return 0;
}