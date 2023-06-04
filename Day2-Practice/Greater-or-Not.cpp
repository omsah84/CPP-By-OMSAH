#include<iostream>
using namespace std;

bool isgreater(int a, int b){
    if(a>b){
        return 1;
    }

    return 0;
}

int main(){
    int a, b;

    cin >> a >> b;
    
    if(isgreater(a,b)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}