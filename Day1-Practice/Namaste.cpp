#include <iostream>
using namespace std;

int main()
{
    cout << "Namaste Dunia:-)" << endl;
    int a = 123;
    cout<< "The size of integer:-) " <<sizeof(a)<<endl;

    float b = 12;
    cout <<"The size of flott:-) "<<sizeof(b)<<endl;
    char c = 'a';
    cout << "The size of character:-) "<<sizeof(c)<<endl;
    bool d = true;
    cout << "The size of boolean:-) " <<sizeof(d)<<endl;
    double e = 2.3;
    cout << "The size of double:-) "<<sizeof(e)<<endl;
    string f = "OM SAH";
    cout << "The size of string:-) "<<sizeof(f)<<endl;

    unsigned int num = 12;
    cout << "Storing unsigned value:-)" <<num <<endl;

    unsigned int num1 = -12;
    cout << "Storing signed value in unsigned value in:-) " <<num1 <<endl;

    long g = 234;
    cout << "The size of long:-) " <<sizeof(g)<<endl;

    short h = 34;
    cout << "The size of short:-) " <<sizeof(h)<<endl;
    

    
    return 0;
}