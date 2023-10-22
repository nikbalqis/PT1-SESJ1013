#include <iostream>

using namespace std;

int main()
{
    int num1; // defines an integer
    double num2; // defines a a decimal number
    char let; // defines a letter
    char word[21]; // defines a word

    cout << "Enter an integer:" << endl;  // outputs enter an integer for the user
    cin >> num1; // Asks the user to input an integer
    cout << "Enter a decimal number:" << endl; // outputs Enter a decimal number for the user
    cin >> num2; // Asks the user to input a decimal number
    cout << "Enter a single character:" << endl; // outputs Enter a single character for the user
    cin >> let; // Asks the user to input a single character
    cout << "Enter an array of characters:" << endl; // outputs Enter an array of characters for the user
    cin >> word; // Asks the user to input an array of characters
    return 0;
}
