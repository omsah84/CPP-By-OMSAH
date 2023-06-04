#include<iostream>
using namespace std;

int sum(int num){
    int ans = 0;
    for (int i = 0; i <= num;i++){
        if(i%2 !=0){
            ans += i;
        }
    }

        return ans;
}

int main(){
    int num;
    cin >> num;

    int sumOfodd = sum(num);
    cout << sumOfodd;

    return 0;
}