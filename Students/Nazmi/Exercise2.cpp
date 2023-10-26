#include <iostream>

using namespace std;

int main(){

    int a;
    double d;

    //i)
    a = 1, d = 1.0;

    a = 46/9;
    cout << "Value of a is " << a << " and Value of d is " << d << endl;

    //ii)
    a = 1, d = 1.0;

    a = 46 % 9 + 4 * 4 - 2;
    cout << "Value of a is " << a << " and Value of d is " << d << endl;

    //iii)
    a = 1, d = 1.0;

    a %=3 / a + 3;
    cout << "Value of a is " << a << " and Value of d is " << d << endl;

    //iv)
    a = 1, d = 1.0;

    d += 1.5 * 3 + (++a);
    cout << "Value of a is " << a << " and Value of d is " << d << endl;

    //v)
    a = 1, d = 1.0;
    
    d -= 1.5 * 3 + a++;
    cout << "Value of a is " << a << " and Value of d is " << d << endl;





}