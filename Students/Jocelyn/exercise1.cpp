#include <iostream>
#include <string>
using namespace std;

int main() {
    int integer;
    float num;
    char character;
    char array[100];

    cout << "Enter an integer: ";
    cin >> integer;

    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Enter a single character: ";
    cin >> character;

    cout << "Enter an array of characters: ";
    cin.ignore();
    cin.getline(array, 100);

    return 0;
}