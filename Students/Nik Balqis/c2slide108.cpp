#include <iostream>
using namespace std;

int main(){
    int a=1;
    double d=1.0;

    a = 46/9;
    cout << "i) a = " << a << endl;
    a = 46%9+4*4-2;
    cout << "ii) a = " << a << endl;
    a = 45+43%5*(23*3%2);
    cout << "iii) a = " << a << endl;
    a %= 3/a+3;
    cout << "iv) a = " << a << endl;
    d += 1.5*3+(++a);
    cout << "v) d = " << d << endl;
    d -= 1.5*3+a++;
    cout << "vi) d = " << d << endl;
    
    return 0;
}