#ifndef NOEUD_H


enum Etat {
mur, 
sortie, 
a_traiter,
 zero, 
trigo, 
anti_trigo};


int droite; // identifiant de l'arbre droit
int gauche; // identifiant de l'arbre gauche
int face; // identifiant de l'arbre face


int id;
Etat etat;
Voisins voisins;


