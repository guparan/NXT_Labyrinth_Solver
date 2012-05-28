
void manager_initManager()
{
	int i, j;
	for(i=0 ; i<TAILLE_LABYRINTHE_X ; i++)
	{
		for(j=0 ; j<TAILLE_LABYRINTHE_Y ; j++)
		{
			manager_routes[i][j][dir_gauche]=false;
			manager_routes[i][j][dir_avant]=false;
			manager_routes[i][j][dir_droite]=false;
		}
	}
}

bool manager_estVide()
{
	int i, j;
	for(i=0 ; i<TAILLE_LABYRINTHE_X ; i++)
	{
		for(j=0 ; j<TAILLE_LABYRINTHE_Y ; j++)
		{
			if( manager_routes[i][j][dir_gauche]
				|| manager_routes[i][j][dir_avant]
				|| manager_routes[i][j][dir_droite]
				) return false;
		}
	}
	return true;
}

int manager_nbRoutes(int x, int y)
{
	int nb=0;
	if(manager_routes[x][y][dir_gauche]) nb++;
	if(manager_routes[x][y][dir_droite]) nb++;
	if(manager_routes[x][y][dir_avant]) nb++;
	return nb;
}

void manager_setRoute(int x, int y, bool gauche, bool avant, bool droite)
{
	if(x>=TAILLE_LABYRINTHE_X || y>=TAILLE_LABYRINTHE_Y) Stop(true);
	manager_routes[x][y][dir_gauche] = gauche;
	manager_routes[x][y][dir_avant] = avant;
	manager_routes[x][y][dir_droite] = droite;
}

bool manager_peutAller(int x, int y, Direction d)
{
	if(x>=TAILLE_LABYRINTHE_X || y>=TAILLE_LABYRINTHE_Y) Stop(true);
	
	return manager_routes[x][y][d];
}