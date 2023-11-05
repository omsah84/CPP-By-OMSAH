#include<iostream>
using namespace std;

bool isPerfectNum(int n ){
    for(int i = 2;i<=n;i++){
        int a = i*i;
        if(a == n){
            return true;
        }
    }
    return false;
}


int main(){
    int start = 24;
    int end = 49;

    int cnt  = 0;

    for(int i  = start ;i<=end;i++){
        if(isPerfectNum(i)){
            cnt++;
        }
}

cout<< cnt;
}