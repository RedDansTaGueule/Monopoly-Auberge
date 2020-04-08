#pragma once
#include <string>
#include <vector>
#include "CartesPropriete.h"
#include <iostream>
using namespace std;


class Joueur
{
private:
    string nom;
    int cagnotte;
    int numero;
    int localisation;
    int couleur;
    int penalite;
    vector<CartePropriete*> mesProps;

public:
    Joueur(vector<Joueur*>* listeJoueurs);
    
    void setCagnotte(int effetArgent);
    void setLocalisation(int localisation);
    void setPenalite(int penalite);
    void addLocalisation(int effetDeplacement);
    void setNom(string nom);
    void setNumero(int numero);
    void setCouleur(int couleur);

    string getNom();
    int getCagnotte();
    int getLocalisation();
    int getPenalite();
    int getCouleur();
    int getNumero();

    int detectionGroupe(string nomCouleur, int groupe);
    void addCarteProp(CartePropriete* carte);

    void afficher();
};

class Humain : public Joueur {
public:
    Humain(vector<Joueur*>* listeJoueurs);
};

class Bot : public Joueur {
public:
    Bot(vector<Joueur*>* listeJoueurs);
    void acheterCarte(int montant);
};