#include<iostream>
using namespace std;

double simpleint(double p,double t, double r){
    return (p * t * r) / 100;
}

int main(){
    double p, t, r;
    cout << "Enter the value: ";
    cout << endl;
    cin >> p >> t >> r;

    double si = simpleint(p, t, r);
    cout << "The simple interest is: ";
    cout << si;

    return 0;
}