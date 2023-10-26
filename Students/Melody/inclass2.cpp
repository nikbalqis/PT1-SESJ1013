#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a= 1;
	double d=1.0;
	
	a=46/9;
	std::cout << "a=" << a << std::endl;
	
	a=46%9+4*4-2;
	std::cout << "a=" << a << std::endl;

	
	a=45+43%5*(23*3%2);
    std::cout << "a=" << a << std::endl;
	
	a%=3/a+3;
    std::cout << "a=" << a << std::endl;
	
	d+=1.5*3+(++a);
    std::cout << "d=" << a << std::endl;
	
	d-=1.5*3+ a++;
    std::cout << "d=" << a << std::endl;
	
	return 0;
}
