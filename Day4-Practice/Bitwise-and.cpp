#include<iostream>
using namespace std;
void bitwiseand(int a,int b){

    cout << "The bitwise and operation: " << (a & b);
    cout << endl;
}

void bitwiseor(int a, int b){
    cout << "The bitwise or operation: " << (a | b);
    cout << endl;
}

void bitwisenot(int a){
    cout << "The bitwise not operation: " << (~a);
    cout << endl;
}

void bitwisexor(int a, int b){

    cout << "The bitwise xor operation: " << (a ^ b);
    cout << endl;
}

void bitwiseleftshift(int a, int pos){

    cout << "The bitwise left shift operation: " << (a << pos);
    cout << endl;
}

void bitwiserightshift(int a, int pos){

    cout << "The bitwise right shift operation: " << (a >> pos);
    cout << endl;
}


int main(){
    int a, b;

    cout << "Enter the number is: ";
    cout << endl;
    cin >> a >> b;

    bitwiseand(a, b);
    bitwiseor(a, b);
    bitwisenot(a);
    bitwisexor(a, b);
    bitwiseleftshift(a,1);
    bitwiserightshift(b, 1);

    return 0;
}
