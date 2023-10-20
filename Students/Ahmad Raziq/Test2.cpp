#include <iostream>

using namespace std;

int main(){
    string name, nokp, email, nophone;
    int order[5], bil = 0;
    string menu[5] = {"Burger", "Pizza", "Nasi Lemak", "Pisang goreng", "Roti canai"};
    double harga[5] = {10.00, 15.00, 2.00, 6.00, 2.50};
    double total = 0.0;
    bool ulang = false;
    char yn = 'N';

    cout << "\t\tPersonal Information\n";
    cout << "\t\t--------------------\n\n";
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Please enter your IC Number: ";
    cin >> nokp;
    cout << "Please enter your email: ";
    cin >> email;
    cout << "Please enter your phone number: ";
    cin >> nophone;

    cout << "\t\tMenu\n";
    cout << "\t\t----\n\n";

    for (int i=0; i< 5; i++){
        cout << i+1 << ". " << menu[i] << "\tRm " << harga[i] << "\n";
    }

    do {
        
        cout << "\nYour order: ";
        cin >> order[bil];
        order[bil] = order[bil] - 1;
        cout << "Would you like to add more? (Y/N)\n";
        cin >> yn;

        if (yn == 'Y' || yn == 'y'){
            ulang = true;
            bil++;
        } else {
            ulang = false;
        }

    } while (ulang == true);

    cout << "\t\tReceipt\n";
    cout << "\t\t-------\n\n";

    cout << "Name: " << name;
    cout << "\nIC Number: " << nokp;
    cout << "\nEmail: " << email;
    cout << "\nPhone Number: " << nophone << "\n\n";

    for(int i =0; i<=bil; i++){
        cout << i+1 << ". " << menu[order[i]] << "\tRM " << harga[order[i]] << "\n";
        total = total + harga[order[i]];
    }

    cout << "Total: Rm" << total << "\n\n";

    system("pause");
    return 0;
}