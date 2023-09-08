//Grading scheme in c/c++

#include<iostream>
using namespace std;

int main(){
    int mark;

    cout<<"Enter you mark: ";
    cin>>mark;

    if(mark>= 90 && mark<=100){
        cout<<"A+";
    }else if(mark>=80 && mark<90){
        cout<<"A";
    }else if(mark>=70 && mark<80){
        cout<<"B";
    }else if(mark >=60 && mark<70 ){
        cout<<"C";
    }else if(mark>=50 && mark<60){
        cout<<"D";
    }else if(mark<50){
        cout<<"F";
    }
    else{
        cout<<"Please Enter valid marks..";
    }
    
    return 0;
}