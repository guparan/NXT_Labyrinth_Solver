#include "pile.h"

bool pile_estVide()
{
	return pile_tete==0;
}

void pile_initPile()
{
	int i;
	for(i=0 ; i<TAILLE_PILE ; ++i)
	{
		pile_pivots[i] = case_initCase();
	}	
	pile_tete = 0;
}

void pile_empiler(int x, int y)
{
	Case c = case_creerCase(x,y);
	pile_tete++;
	pile_pivots[pile_tete] = c;
}

void pile_depiler()
{
	pile_pivots[pile_tete] = case_initCase();
	pile_tete--;
}

Case pile_top()
{
	return pile_pivots[pile_tete];
}