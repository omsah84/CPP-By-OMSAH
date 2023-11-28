#include<iostream>
#include<vector>
#include<string>
#include<utility>
using namespace std;

int main(){
    // vector<char> v(5,'0');
    // cout<<v.size()<<endl;

    // // for(auto i = 0;i<v.size();i++){
    // //     cout<<v[i]<<" ";
    // // }

    // v.insert(v.begin(),30);

    // cout<<v.at(5)<<endl;
    // v.clear();
    // cout<<v.size()<<endl;

    pair<int,int> arr[3];

    arr[0].first = 23;
    arr[0].second = 20;

    arr[1].first = 23;
    arr[1].second = 20;


    arr[2].first = 23;
    arr[2].second = 20;

    
    for(int  i = 0;i<3;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<" ";
        cout<<endl;
    }


    
    return 0;
}