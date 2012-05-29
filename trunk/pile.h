
bool pile_estVide()
{
	return pile_pivots_tete==-1;
}

void pile_initPile()
{
	int i,j;
	for(i=0 ; i<TAILLE_PILE ; ++i)
	{		
		pile_pivots[i].coord.x = -1;
		pile_pivots[i].coord.y = -1;
		for(j=0 ; j<4 ; j++)
		{
			pile_pivots[i].possibilites[j] = true;
		}
	}	
	pile_pivots_tete = -1;
}

void pile_empiler(int x, int y, bool gauche, bool droite, bool haut, bool bas)
{
	pile_pivots_tete++;
	pile_pivots[pile_pivots_tete].coord.x = x;
	pile_pivots[pile_pivots_tete].coord.y = y;
	pile_pivots[pile_pivots_tete].possibilites[dir_gauche]=gauche;
	pile_pivots[pile_pivots_tete].possibilites[dir_droite]=droite;
	pile_pivots[pile_pivots_tete].possibilites[dir_haut]=haut;
	pile_pivots[pile_pivots_tete].possibilites[dir_bas]=bas;
}

int pile_depiler()
{
	int j;
	if(pile_pivots_tete >= 0)
	{
		pile_pivots[pile_pivots_tete].coord.x = -1;
		pile_pivots[pile_pivots_tete].coord.y = -1;
		for(j=0 ; j<4 ; j++)
		{
			pile_pivots[pile_pivots_tete].possibilites[j] = true;
		}
		pile_pivots_tete--;
	}
	return pile_pivots_tete;
}

void pile_editer(Direction d, bool val)
{
  int i;
	pile_pivots[pile_pivots_tete].possibilites[d]=val;

	for(i=0 ; i<4 ; i++)
	{
		if(pile_pivots[pile_pivots_tete].possibilites[i]==true) return;
	}
	// toutes les possibilites du pivot de tete sont false
	pile_depiler();
}

Case pile_top()
{	
	return pile_pivots[pile_pivots_tete].coord;
}

int pile_getPremierePossibilite()
{
	int i;
	for(i=0 ; i<4 ; i++)
	{
		if(pile_pivots[pile_pivots_tete].possibilites[i]==true) return i;
	}
	// le premier pivot est vide
	pile_depiler();
	return -1;
}

void pile_setPossibilite(Direction d, bool val)
{
	pile_pivots[pile_pivots_tete].possibilites[d]=val;
}
