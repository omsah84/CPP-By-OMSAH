#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
    int num1, num2;

    cout << "Enter the two number: ";
    cin >> num1 >> num2;

    int sum2num = sum(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum2num;

    return 0;
}