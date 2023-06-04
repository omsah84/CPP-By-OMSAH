#include<iostream>
using namespace std;

bool isvalid(int a, int b,int c){
    if(a<=0 || b<=0 || c<=0){
        return 0;
    }
    else {
        if((a+b)>c  || (a+c)>b || (b+c)> a){
            return 1;
        }
    }

    return 0;
}

int main(){
    int a, b, c;

    cin >> a >> b >> c;
    if(isvalid(a,b,c)){
        cout << "The given triangle is valid..";

    }
    else{
        cout << "The given triangle is not valid..";
    }
    
    
    return 0;
}