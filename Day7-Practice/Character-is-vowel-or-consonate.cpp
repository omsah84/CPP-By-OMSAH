//c++ program to check character is a vowel or consonant
#include<iostream>
using namespace std;

bool isVowel(char c){
    if(c == 97 || c == 'e' || c == 'i' || c=='o' || c== 'u'){
        return true;
    }
    else if(c == 65 || c== 69|| c==73 || c==79 || c== 85){
        return true;
    }
    else{
        return false;
    }
}



int main(){

    char c;
    cout<<"Enter the character: ";
    cin>>c;

    if(isVowel(c)){
        cout<<"The entered character is vowel.";
    }else{
        cout<<"The entered character is consonant.";
    }

    
    return 0;
    
    
}