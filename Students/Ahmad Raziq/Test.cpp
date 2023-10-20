#include <iostream>

using namespace std;

int main(){
    string x;

    cout << "Enter your name: ";
    getline(cin, x);
    cout << "Your name is " + x + "\n";

    system("pause");
    return 0;
}