#include<iostream>
using namespace std;

int sumofevennum(int num){
    int ans = 0;
    for (int i = 0; i <= num;i++){
        if(i%2==0){
            ans += i;
        }
    }

        return ans;
}
int main(){

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int sum = sumofevennum(num);
    cout << "The sum of even number is: " << sum;
    return 0;
}