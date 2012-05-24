
bool pile_estVide()
{
	return pile_tete==0;
}

void pile_initPile()
{
	int i;
	for(i=0 ; i<TAILLE_PILE ; ++i)
	{
		pile_pivots[i][coord_x]=-1;
		pile_pivots[i][coord_y]=-1;
	}	
	pile_tete = 0;
}

void pile_empiler(int x, int y)
{
	pile_tete++;
	pile_pivots[pile_tete][coord_x] = x;
	pile_pivots[pile_tete][coord_y] = y;	
}

void pile_depiler()
{
	pile_pivots[pile_tete][coord_x] = -1;
	pile_pivots[pile_tete][coord_y] = -1;
	pile_tete--;
}

Case pile_top()
{
	Case c;
	c.x = pile_pivots[pile_tete][coord_x];
	c.y = pile_pivots[pile_tete][coord_y];
	return c;
}