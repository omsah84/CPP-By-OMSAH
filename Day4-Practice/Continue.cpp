#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 30;i++){
        cout << i << " ";
        continue;

        cout << "the code will not excute..";
        cout << i++;
    }

        return 0;
}