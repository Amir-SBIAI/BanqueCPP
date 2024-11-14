#include <iostream>
#include <cstring>
#include "client.h"

using namespace std;

Client::Client(string identifiant, string nomFamille, string prenomClient, string telephone) {  
    CIN = identifiant;
    nom = nomFamille;
    prenom = prenomClient;
    numero = telephone;
}

Client::~Client() {  
}


string Client::getCIN() {
    return CIN;
}

string Client::getNom() {
    return nom;
}

string Client::getPrenom() {
    return prenom;
}

string Client::getTelephone() {
    return numero;
}
