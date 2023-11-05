#include<iostream>
#include <sstream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    string lineInput;
    getline(cin, lineInput);
    istringstream iss(lineInput);

    vector<int> ans;
    int num;

    while (iss >> num )
        ans.push_back(num);


    int sum = accumulate(ans.begin(), ans.end(), 0);
    vector<string> value ={"east", "north", "west","south"};
    if(sum%4 == 0){
        cout<<value[0];
    }
    if(sum<0){
        cout<<value[4 +(sum%4)];
    }else{
    cout<<value[sum%4];

    }


    
    return 0;
}