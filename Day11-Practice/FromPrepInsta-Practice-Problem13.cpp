//functions in string
#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);

    //string length
    cout<<"The length of string is: "<<name.length();

    //size of string 
    cout<<endl;
    cout<<"The size  of string is: "<<name.size()<<endl;

    ////accessing charactgers
    for(int i = 0;i<name.size();i++){
        cout<<name[i];
    }
    
    cout<<endl;
    // cout<<str.at(2);

    //str1.append(str2);

    //str1 == str2
    //str1 !=str2
    //str1<str2


    //substring
    cout<<name.substr(0);

    //finding and replace
    cout<<endl;
    // cout<<name.find(om)<<endl;
    // cout<<name.replace(0,3,newstring)<<endl;

    //string conversion
    cout<<to_string(34)<<endl;


    //string input / output
    //std::cin>>str
    //std::cout<<str

    //string manipulating
    // cout<<name.insert(pos, newString);
    //name.erase(pos,length)
    //name.clear()


    
    return 0;
}