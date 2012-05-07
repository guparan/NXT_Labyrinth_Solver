#ifndef MANAGER_H
#define MANAGER_H

#include "noeud.h"

struct Coord {
	int x;
	int y;
};

struct Manager {
	Noeud arbre[TAILLE_MAX];
	Coord coord[TAILLE_MAX];
};

/* Methodes */
Manager manager_creerManager();
int manager_estVide(Manager m);

int manager_ajouterNoeud(Manager m, Noeud n);
//int manager_supprimerNoeud(Manager m, Noeud n);

Noeud manager_getNoeud(Manager m, int id);

#endif
