//#ifndef PILE_H
//#define PILE_H

#include "case.c"
/*
struct Pile 
{
	Case tab[TAILLE_PILE]; // tableau qui contient les coordonnees
	int id_queue; // indice du dernier element du tableau
};
*/

bool pile_estVide();
void pile_initPile();

void pile_empiler(int x, int y);
void pile_depiler();
Case pile_top();


//#endif