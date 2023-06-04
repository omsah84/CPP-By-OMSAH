#include<iostream>
using namespace std;
int main(){
    int a, b;

    cout << "Enter the value: ";
    cin >> a >> b;

    cout << "The pre-increment: " << (++a);
    cout << endl;
    cout << "The post-increment: " << (a++);
    cout << endl;
    cout << "The pre - decrement: " << (--b);
    cout << endl;
    cout << "The post-decrement: " << (b--);
    cout << endl;


}