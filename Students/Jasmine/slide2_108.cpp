#include <iostream>
using namespace std;

int main (){
    int a = 1;
    double d = 1.0;

    a = 46/9;
    cout << "46/9 = " << a << endl;
   
    a = 46%9+4*4-2;
    cout << "46%9+4*4-2 = " << a << endl;

    a = 45+43%5*(23*3%2);
    cout << "45+43%5*(23*3%2) = "<< a << endl;

    a %= 3/a+3;
    cout << "a %= 3/a+3 = " << a << endl;

    d += 1.5*3+(++a);
    cout << "d += 1.5*3+(++a) = " << d << endl;

    d -= 1.5*3+ a++;
    cout << "d -= 1.5*3+ a++ = "<< d << endl;

    return 0;
}