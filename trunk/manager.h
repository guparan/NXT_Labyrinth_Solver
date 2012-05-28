
void manager_initManager()
{
	int i, j;
	for(i=0 ; i<TAILLE_LABYRINTHE_X ; i++)
	{
		for(j=0 ; j<TAILLE_LABYRINTHE_Y ; j++)
		{
			manager_routes[i][j][dir_gauche]=true;
			manager_routes[i][j][dir_droite]=true;
			manager_routes[i][j][dir_haut]=true;
			manager_routes[i][j][dir_bas]=true;
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
			if( !manager_routes[i][j][dir_gauche]
				|| !manager_routes[i][j][dir_droite]
				|| !manager_routes[i][j][dir_haut]
				|| !manager_routes[i][j][dir_bas]
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
	if(manager_routes[x][y][dir_haut]) nb++;
	if(manager_routes[x][y][dir_bas]) nb++;
	return nb;
}

void manager_setRoute(int x, int y, Direction d, bool val)
{
	if(x>=TAILLE_LABYRINTHE_X || y>=TAILLE_LABYRINTHE_Y) Stop(true);
		
	manager_routes[x][y][d] = val;
}

bool manager_peutAller(int x, int y, Direction d)
{
	if(x>=TAILLE_LABYRINTHE_X || y>=TAILLE_LABYRINTHE_Y) Stop(true);
	
	return manager_routes[x][y][d];
}