#include "manager.h"

void manager_initManager()
{
	int i, j;
	for(i=0 ; i<TAILLE_X ; i++)
	{
		for(j=0 ; j<TAILLE_Y ; j++)
		{
			manager_routes[i][j]=0;
		}
	}
}

bool manager_estVide()
{
	int i, j;
	for(i=0 ; i<TAILLE_X ; i++)
	{
		for(j=0 ; j<TAILLE_Y ; j++)
		{
			if(manager_routes[i][j]!=0) return false;
		}
	}
	return true;
}

void manager_setRoutes(int x, int y, nb_routes nb)
{
	if(x>=TAILLE_X || y>=TAILLE_Y) Stop(true);
	
	manager_routes[x][y] = nb;
}

nb_routes manager_getRoutes(int x, int y)
{
	if(x>=TAILLE_X || y>=TAILLE_Y) Stop(true);
	
	return manager_routes[x][y];
}



