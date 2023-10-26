#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int num1;
    double num2;
    char single[1];
    char str[100];

    //cout << "Enter an integer: ";
    cin >> num1;
    //cout << "Enter a decimal number: ";
    cin >> num2;
    //cout << "Enter a single character: ";
    cin >> single;
    //cout << "Enter an array of characters: ";
    cin >> str;

    cout << "Enter an integer:"<<num1<<endl;
    cout << "Enter a decimal number:"<<num2<<endl;
    cout << "Enter a single character:"<<single<<endl;
    cout << "Enter an array of characters:"<<str<<endl;
    return 0;
}
