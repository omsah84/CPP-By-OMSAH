#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "abcd";
    string str2 = "ba";

    int len1 = str1.length();
    int len2 = str2.length();

    string newStr = "";

    for(int i = 0;i<len1;i++){
        bool flat = false;
        for(int j = 0;j<len2;j++){
            if(str1[i] == str2[j]){
                flat = true;
               break;
            }   
        }

        if(flat ==false){
            newStr = newStr + str1[i];
        }
    }

    cout<<newStr;
    
    return 0;
}