#include "manager.h"
#define TAILLE_MAX valeur  // /!\ à définir

struct Pile 
{
	Coord tab[TAILLE_MAX]; // tableau qui contient les coordonnees
	int id_queue; // indice du dernier element du tableau
};

Coord initialiserCoord() 
{
	Coord c;
	c.x = -1;
	c.y = -1;
return c;
}

Pile creerPile()
{
	Pile p;
	p.tab[0] = initialiserCoord();
	p.id_queue = 0;
return p;
}

Pile empiler(Pile p, Coord c)
{
	p.id_queue++;
	p.tab[p.id_queue] = c;
return p;
}

Pile depiler(Pile p)
{
	p.tab[id_queue] = initialiserCoord();
	p.id_queue--;
return p;
}