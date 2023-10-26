#include <iostream>

using namespace std;

int main()
{
int a = 1;
double d = 1.0;

a = 46/9;
a = 46 % 9 + 4 * 4 - 2;
a = 45 + 43 % 5 * (23 * 3 % 2);
a %=3 / a + 3;
d += 1.5 * 3 + (++a);
d -= 1.5 * 3 + a++;

cout << "The value of A" << a << endl;
cout << "The value of D" << d << endl;

    return 0;
}
