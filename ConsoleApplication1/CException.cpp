#include "CException.h"

/*********************
Constructeur par défaut
**********************
Entrée : néant
Necessité : néant
Sortie : néant
Entraine : l'objet en cours est initialisé
*********************/

CException::CException()
{
	uiEXCValeur = 0;
}

/*********************
Destructeur par défaut
**********************
Entrée : néant
Necessité : néant
Sortie : néant
Entraine : l'objet en cours est détruit
*********************/

CException::~CException()
{
}

/*********************
Methode : Lecture du code d'erreur
**********************
Entrée : néant
Necessité : néant
Sortie : unsigned int - retourne code d'erreur
Entraine : retourne le code d'erreur
*********************/

unsigned int CException::EXCLecture()
{
	return uiEXCValeur;
}

/*********************
Methode : Modification du code d'erreur
**********************
Entrée : unsigned int - code d'erreur
Necessité : néant
Sortie : néant
Entraine : Modification du code d'erreur
*********************/

void CException::EXCEcriture(unsigned int uiCodeErreur)
{
	uiEXCValeur = uiCodeErreur;
}