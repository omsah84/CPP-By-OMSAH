#include<iostream>
using namespace std;
int fact(int num){
    int ans = 1;
    for (int i = num; i > 0;i--){
        ans *= i;
    }

        return ans;
}

int main(){
    int num;
    cout << "Enter the number:";
    cin >> num;

    int factans = fact(num);
    cout << "The factorial of given number is: ";
    cout << factans;

    return 0;
}