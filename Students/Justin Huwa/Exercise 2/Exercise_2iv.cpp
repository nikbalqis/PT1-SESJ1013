#include <iostream>                 //The first part//

int main() {
    int a = 1; 
    a %=3 / a + 3;
    std::cout << "The value of 'a' is: " << a << std::endl;

    return 0;
}