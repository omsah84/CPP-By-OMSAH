//reverse a string
#include<iostream>
// #include<string>
using namespace std;

//driver code
int main(){
    string str;
    string newstr="";

    cout<<"Enter your name:";
    getline(cin,str);

    int len = str.length()-1;
    cout<<"The entered name is: ";
    for(int i = len; i>=0;i--){
        newstr +=str[i];
    }
    cout<<newstr;
  
    
    return 0;
}