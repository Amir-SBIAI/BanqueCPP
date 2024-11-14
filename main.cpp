#include <iostream>
#include "client.h"
#include "compte.h"

using namespace std;

int main() {
    system("CLS");
    cout << "1. Amir SBIAI\n2. Ryiad Mahrez\nVotre choix : ";
    int choix;
    cin >> choix;

    if (choix == 1) {
        Client client1("FR-KHZN45379844", "SBIAI", "Amir", "0615348579");
        Compte compte1("00001", 500.0, client1);
        cout << "Entrez le code PIN : ";
        int code;
        cin >> code;
        if (code == 1111) {
            compte1.menu();
        } else {
            cout << "Code incorrect\n";
        }
    } else if (choix == 2) {
        Client client2("FR-LDEN41256687", "Mahrez", "Ryiad", "0645278845");
        Compte compte2("00002", 400.0, client2);
        cout << "Entrez le code PIN : ";
        int code;
        cin >> code;
        if (code == 2222) {
            compte2.menu();
        } else {
            cout << "Code incorrect\n";
        }
    } else {
        cout << "Choix incorrect\n";
    }

    return 0;
}
