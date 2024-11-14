#ifndef COMPTE_H
#define COMPTE_H

#include <iostream>
#include <string>
#include "client.h"

using namespace std;

class Compte {
private:
    string ID;
    double solde;
    string iban;
    Client proprietaire; 

public:
    Compte(string, double, Client);  
    ~Compte();  


    string getIban();
    double getSolde();

    void menu();
    void Crediter();
    void Debiter();
    void Transfert();
    void AfficherInfos();
};

#endif
