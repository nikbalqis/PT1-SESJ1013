#include <iostream>

int main() {
    int a=1;
    double d=1.0;
    
    //i)
    a = 46/9;
    std::cout << "i) a= " << a << std::endl;
    
    //ii)
    a = 46%9+4*4-2;
    std::cout << "ii) a= " << a << std::endl;
    
    //iii)
    a = 45+43%5*(23*3%2);
    std::cout << "iii) a= " << a << std::endl;
    
    //iv)
    a %= 3/a+3;
    std::cout << "iv) a= " << a << std::endl;
    
    //v)
    d += 1.5*3+(++a);
    std::cout << "v) d = " << d << std::endl;
    
    //vi)
    d -= 1.5*3+ a++;
    std::cout << "vi) d= " << d << std::endl;
    
    return 0;
    
}
