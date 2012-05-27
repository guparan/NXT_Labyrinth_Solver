#ifndef PRIMITIVE_H
#define PRIMITIVE_H



//Solveur de Labyrinth
//    /!\ LE CENTRE DE PIVOTEMENT N'EST PAS AU CENTRE DU ROBOT
/* SCHEMA
__________________________________ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ______
   |                       |                                      |
   |                       |                                      |
   |                       |                                      |
   |          _|_  _  _  _ | _ _ _ _ _ _ _ _ _ ____Pos avt rotat� |   19,5cm
   |           |           |                     |                |
   |          _|_    _  _ _|_  ___  pos apres rotat�              |
   |           |           |    |                |                |
   |                       |    | 8,5 cm         |                |
___|___________ ___________|____|___          ___|___          ___|___
La position est la position du centre g�om�trique du robot
c.a.d le centre d'un rectangle 19,5*13 cm�
*/
/*******************************************************************/

//Disposition des moteurs :
// A :  gauche
// B :  droite

// angle n�gatif : sens trigo
// angle positif : sens anti trigo


char speed_movement_rot = 90; //� regler
char speed_movement_back = 100;  //� regler
char speed_movement = 100;  //� regler
char duree_fw = 3000;  // peut �tre pas n�cessaire (le robot va jusqu'a la ligne)
char duree_rot =720;
char light_white = 45;  // � regler
int ROUGE= 60  ;
int BLANC=63   ;       //     /!\ ces valeurs d�pendent grandement de la luminosit�
int NOIR = 42   ;      //     noir et blanc assez simple � differencier
int BLEU =47    ;      // reste une troisieme couleur a d�finir pour la sortie
int JAUNE=52    ;      // rouge et jaune elimin� car pr le capteur jaune~rouge~blanc

//taille du robot : 19,5 cm * 13 cm   (longeur * largeur)
//centre de pivotement : 8,5cm(distance du)

int SORTIE=3518;


// sens de rotation
enum sens{droite, gauche};

mutex moveMutex;

task avancer();
void reculer(int duree);
void turn(sens s,int duree);
void test_lum();


#endif




