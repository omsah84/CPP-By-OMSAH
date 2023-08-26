#include<iostream>

int main(){

int a,b;

//Getting input for the two numbers
std::cout<<"Enter the first number: ";
std::cin>>a;

std::cout<<"Enter the second number: ";
std::cin>>b;

//swapping the numbers using a temp
int temp=a;
a =b;
b = temp;

std::cout<<"After swapping, the first number is: "<<a<<std::endl;
// std::cout<<endl;
std::cout<<"Ater swapping, the second number is: "<<b;

return 0;

}
