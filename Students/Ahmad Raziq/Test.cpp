#include <iostream>

using namespace std;

int main(){
    string xs;

    cout << "Enter your name: ";
    getline(cin, xs);
    cout << "Your name is " + xs + "\n";

    system("pause");
    return 0;
}