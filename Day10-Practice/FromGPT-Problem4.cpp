//ask the user to enter a sentence and then coutn and display the number os vowels in that sentences.
#include<iostream>
#include<string>

using namespace std;

bool isVowel(char c){
    if(c == 'a' || c =='e' || c == 'i' || c == 'u' || c == 'o' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c=='U'){
        return true;
    }
    return false;
}

int main(){
    string sentence;
    cout<<"Enter the sentences: ";
    getline(cin,sentence);

    int count = 0;
    for(int i = 0;i<sentence.length();i++){
        if(isVowel(sentence[i])){
            count +=1;
        }
    }
     cout << "The number of vowels in that sentence is " << count << endl;
    
    return 0;
}