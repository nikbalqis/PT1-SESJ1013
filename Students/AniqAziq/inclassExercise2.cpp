#include<iostream>
using namespace std;

int main()
{
    int a=1;
    double d=1.0;

    a=46/9;
    cout<< a <<endl;

    a=1;
    a=46%9 +4*4-2;
    cout<<a<<endl;

    a=1;
    a=45+43%5*(23*3%2);
    cout<<a<<endl;

    a=1;
    a%=3/a+3;
    cout<<a<<endl;

    a=1.0;
    d+=1.5*3+(++a);
    cout<<d<<endl;

    a=1,d=1.0;
    d-=1.5*3+a++;
    cout<<d<<endl;

    system("pause");
    return 0;
}