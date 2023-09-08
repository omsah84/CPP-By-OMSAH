//Power of number in c++

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,exp;
    int result;

    num = 2;
    exp = 2;

    result = pow(num,exp);
    cout<<"The answer is "<<result;
    return 0;
}