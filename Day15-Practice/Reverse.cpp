#include<iostream>
#include<algorithm>
using namespace std;

// string reverse(string str){
//     string newString = "";
//     for(int i= str.length() -1;i>=0;i--){
//         newString += str[i];
//     }
//     return newString;
// }

// string reverse(string str){
//     int n = str.length();
//     if(n==0){
//         return "";
//     }

//     return str[n-1] + reverse(str.substr(0,n-1));
// }

void reverse(string &str){
    int start = 0;
    int end = str.length()-1;

    while (start<end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
}

int main(){
    int t;
    string str;
    cout<<"Enter test case..";
    cin>>t;

    for(int i =0;i<t;i++){
        cin>>str;
        reverse(str);
        cout<<str<<endl;

    }
    return 0;
}