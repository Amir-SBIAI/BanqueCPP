#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>

using namespace std;

class Client {
private:
    string CIN;
    string nom;
    string prenom;
    string numero;

public:
    Client(string, string, string, string);  
    ~Client();  

    string getCIN();
    string getNom();
    string getPrenom();
    string getTelephone();
};

#endif
