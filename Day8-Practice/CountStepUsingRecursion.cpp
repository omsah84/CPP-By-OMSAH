#include<iostream>
using namespace std;

void countStep(int n){
    
    if(n == 0){
        return ;
    }

    countStep(n-1);
    cout<<n<<" ";

}

int main(){
    int n = 5;

    countStep(n);
    // cout<<"The recursion step is "<<ans;
    
    return 0;
}