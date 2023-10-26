#include <iostream>
using namespace std;

int main() {
    int integer;
    float decimal;
    char character;
    char charArray[100];

    cout << "Enter an integer: ";
    cin >> integer;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Enter a single character: ";
    cin >> character;

    cout << "Enter an array of characters: ";
    cin >> charArray;

    cout << "\nYou entered:\n";
    cout << "Integer: " << integer << endl;
    cout << "Decimal: " << decimal << endl;
    cout << "Character: " << character << endl;
    cout << "Character Array: " << charArray << endl;

    return 0;
}
