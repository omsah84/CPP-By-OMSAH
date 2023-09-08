#include<iostream>
using namespace std;

class Person{
    string name;
    int age;

    public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    string getName(){
        return name;
    }
    
    int getAge(){
        return age;
    }
};

int main(){

    Person obj("omsah", 24);

    cout<<obj.getName();
    cout<<endl;
    cout<<obj.getAge();
    cout<<endl;

    return 0;
}