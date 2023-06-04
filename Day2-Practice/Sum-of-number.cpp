#include<iostream>
using namespace std;

int sumdig(int num){
    int ans = 0;
    for (int i = 0; i <= num;i++){
        ans += i;
    }

        return ans;
}

int main(){
        int num;
        cin >> num;

        int sum = sumdig(num);
        cout << "The sum of given digits is: " << sum;
        

        return 0;
}