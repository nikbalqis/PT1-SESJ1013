#include <iostream>

using namespace std;

int main(){
    int a = 1;
    double d = 1.0;

    a = 46/9;
    cout << "i) " << a << endl;
    a=1;

    a = 46 % 9 +4 * 4 - 2;
    cout << "ii) " << a << endl;
    a=1;

    a= 45+43%5*(23*3%2);
    cout << "iii) " << a << endl;
    a=1;

    a %= 3/a+3;
    cout << "iv) " << a << endl;
    a=1;

    d += 1.5*3 + (++a);
    cout<< "v) " << d << endl;
    d=1.0;
    a=1;

    d -= 1.5*3 + a++;
    cout<< "vi) " << d << endl;


    system("pause");
    return 0;
}
