#include<iostream>
using namespace std;

void printEven(int num){
    for (int i = 0; i <= num;i++){
        if(i%2==0){
            cout << "The even number is: ";
            cout << i;
            cout << endl;
        }
    }

    return;
}


int main(){
    int n;

    cin >> n;
    printEven(n);
    return 0;
}
