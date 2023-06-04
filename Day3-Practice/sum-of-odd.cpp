#include<iostream>
using namespace std;

int sumofoddnum(int num){
    int ans = 0;

    int i = 0;
    while (i<=num)
    {
        if(i%2 !=0){
            ans += i;
        }
        i++;
    }
    

    return ans;
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int sum = sumofoddnum(num);
    cout << "The sum of odd number is: " << sum;

    return 0;
}