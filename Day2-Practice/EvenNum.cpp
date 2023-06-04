#include<iostream>
using namespace std;
void printOdd(int num){
    for (int i = 0; i <= num;i++){
        if(i%2 !=0){
            cout << "The odd number is: " << i;
            cout << endl;
        }
    }
}

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
    // printEven(n);
    printOdd(n);
    
    return 0;
}
