#include <iostream>
using namespace std;
int main()
{
int a = 1;
double d = 1.0;
a = 46/9;
cout<<"a="<<a;
a=1;
a = 46 % 9 +4 * 4 - 2;
cout<<"a="<<a;
a=1;
a = 45 + 43 % 5 * (23 * 3 % 2);
cout<<"a="<<a;
a=1;
a %=3 / a + 3;
cout<<"a="<<a;
d += 1.5 * 3 + (++a);
cout<<"d="<<d;
d=1.0;
d -= 1.5 * 3 + a++;
cout<<"d="<<d;
return 0;
}
