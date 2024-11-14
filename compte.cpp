#include <iostream>
#include "compte.h"

using namespace std;

Compte::Compte(string idClient, double montantInitial, Client clientProprio) 
    : ID(idClient), solde(montantInitial), proprietaire(clientProprio) {  
}

Compte::~Compte() {  
}

double Compte::getSolde() {
    return solde;
}

string Compte::getIban() {
    return iban;
}

void Compte::Crediter() {
    system("CLS");
    cout << "\n\tDEPOT D'ARGENT\n\n";
    cout << "Entrez le montant a deposer : ";
    double montant;
    cin >> montant;
    if (montant > 0) {
        solde += montant;
        cout << "\nARGENT AJOUTE ! Solde actuel : " << solde << " euros\n";
    } else {
        cout << "\nERREUR : Montant invalide\n";
    }
    system("pause");
}

void Compte::Debiter() {
    system("CLS");
    cout << "\n\tRETRAIT D'ARGENT\n\n";
    cout << "Entrez le montant a retirer : ";
    double montant;
    cin >> montant;
    if (montant > 0 && montant <= solde) {
        solde -= montant;
        cout << "\nARGENT RETIRE ! Solde actuel : " << solde << " euros\n";
    } else {
        cout << "\nERREUR : Montant invalide ou insuffisant\n";
    }
    system("pause");
}

void Compte::Transfert() {
    system("CLS");
    cout << "\n\tTRANSFERT D'ARGENT\n";
    cout << "Montant du transfert : ";
    double montant;
    cin >> montant;
    if (montant > 0 && montant <= solde) {
        solde -= montant;
        cout << "\nTRANSFERT REUSSI ! Solde actuel : " << solde << " euros\n";
    } else {
        cout << "\nERREUR : Montant incorrect\n";
    }
    system("pause");
}

void Compte::AfficherInfos() {
    system("CLS");
    cout << "\n\tDETAILS DU COMPTE\n\n";
    cout << "Nom du titulaire : " << proprietaire.getNom() << endl;
    cout << "Prenom du titulaire : " << proprietaire.getPrenom() << endl;
    cout << "Telephone : " << proprietaire.getTelephone() << endl;
    cout << "Solde disponible : " << solde << " euros" << endl;
    system("pause");
}

void Compte::menu() {
    int choix = 0;
    while (choix != 5) {
        system("CLS");
        cout << "\n--- MENU DU COMPTE ---\n";
        cout << "1. Crediter\n2. Debiter\n3. Transfert\n4. Afficher Infos\n5. Quitter\n\nVotre choix : ";
        cin >> choix;
        switch (choix) {
            case 1: Crediter(); break;
            case 2: Debiter(); break;
            case 3: Transfert(); break;
            case 4: AfficherInfos(); break;
            case 5: break;
            default: cout << "Option incorrecte\n"; break;
        }
    }
}
