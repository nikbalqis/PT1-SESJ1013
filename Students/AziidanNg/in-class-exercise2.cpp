#include <iostream>
using namespace std;
//Aziidan Punya
int main() {    
    int a = 1, b=1,c=1,e=1,g=1,h=1,i=1;//variable lain lain sebab nanti mengganggu output lain
    double d = 1.0, f=1.0;//konsep masih sama seperti soalan

    a = 46/9;
    cout << "i) a="<<a<<"\n";

    b = 46 % 9 + 4 * 4 - 2;
    cout << "ii) b="<< b<<"\n";

    c = 45 + 43 % 5 * (23 * 3 % 2);
    cout << "iii) c="<< c<<"\n";

    e %=3 / g + 3;
    cout << "iv) e="<< e<<"\n";

    d += 1.5 * 3 + (++i);
    cout << "v) d="<<d<<"\n";

    f -= 1.5 * 3 + h++;
    cout << "vi) f="<<f<<"\n";
}