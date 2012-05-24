#ifndef MANAGER_H
#define MANAGER_H

/*
struct Manager {
	nb_routes cases[10][10];
	Pile pivots;
};
*/


void manager_initManager();
bool manager_estVide();
void manager_setRoutes(int x, int y, nb_routes nb);
nb_routes manager_getRoutes(int x, int y);


#endif
