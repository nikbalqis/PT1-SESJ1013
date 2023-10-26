#include <iostream>                 //The first part//

int main() {
    int a = 1; 
    double d = 1.0;
    d -= 1.5 * 3 + a++;
    std::cout << "The value of 'd' is: " << a << std::endl;

    return 0;
}