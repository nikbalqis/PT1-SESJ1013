#include <iostream>

using namespace std;

int main()
{
int a = 1;
double d = 1.0;

a = 46/9;
cout << "The value of A =" <<  a << endl;
a = 46 % 9 + 4 * 4 - 2;
cout << "The value of A =" <<  a << endl;
a = 45 + 43 % 5 * (23 * 3 % 2);
cout << "The value of A =" <<  a << endl;
a %=3 / a + 3;
cout << "The value of A =" <<  a << endl;
d += 1.5 * 3 + (++a);
cout << "The value of D =" <<  d << endl;
d -= 1.5 * 3 + a++;
cout << "The value of D =" <<  d << endl;


    return 0;
}
