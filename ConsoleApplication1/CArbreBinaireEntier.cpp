#include "CArbreBinaireEntier.h"
#include "CException.h"
#include <stdio.h>

/*********************
Constructeur par défaut
**********************
Entrée : néant
Necessité : néant
Sortie : néant
Entraine : Fils droit et gauche sont initialisé à NULL
*********************/

CArbreBinaireEntier::CArbreBinaireEntier()
{
	pABEFilsDroit = NULL;
	pABEFilsGauche = NULL;
}

/*********************
Methode : Constructeur de recopie
**********************
Entrée : CArbreBinaireEntier - & pABEArbreBinaire
Necessité : néant
Sortie : néant
Entraine : Fils droit et gauche sont affectés par rapport à l'argument
*********************/

CArbreBinaireEntier::CArbreBinaireEntier(CArbreBinaireEntier & pABEArbreBinaire)
{
	iABEElement = pABEArbreBinaire.iABEElement;
	
	if (pABEArbreBinaire.pABEFilsGauche == NULL)
		pABEFilsGauche = NULL;
	else
		pABEFilsGauche = new CArbreBinaireEntier(*pABEArbreBinaire.pABEFilsGauche);

	if (pABEArbreBinaire.pABEFilsDroit == NULL)
		pABEFilsDroit = NULL;
	else
		pABEFilsDroit = new CArbreBinaireEntier(*pABEArbreBinaire.pABEFilsDroit);

}

/*********************
Methode : Destructeur
**********************
Entrée : néant
Necessité : Avoir un pABEFilsGauche et un pABEFilsDroit nulle(s) 
Sortie : néant
Entraine : retourne le code d'erreur si pointeur(s) non nulle(s)
*********************/

CArbreBinaireEntier::~CArbreBinaireEntier()
{
	if (pABEFilsGauche != NULL || pABEFilsDroit != NULL) {
		// Situation d'exception
		CException EXCObjet;
		EXCObjet.EXCEcriture(404);
		throw EXCObjet;
	}
}

/*********************
Methode : Lire Element
**********************
Entrée : néant
Necessité : néant
Sortie : int
Entraine : retourne iABEElement
*********************/

int CArbreBinaireEntier::ABELire_Element()
{
	return iABEElement;
}

/*********************
Methode : Lire Element
**********************
Entrée : CArbreBinaireEntier - * pABEArbreBinaire et unsigned int - uiElement
Necessité : néant
Sortie : néant
Entraine : affecte la valeur uiElement à iABEElement
*********************/

void CArbreBinaireEntier::ABEModifier_Element(unsigned int uiElement)
{
	iABEElement = uiElement;
}

/*********************
Methode : Lire Fils Gauche
**********************
Entrée : néant
Necessité : néant
Sortie : CArbreBinaireEntier
Entraine : Retourne la lecture du fils gauche
*********************/

CArbreBinaireEntier * CArbreBinaireEntier::ABELire_FilsGauche()
{
	return pABEFilsGauche;
}

/*********************
Methode : Modifier Gauche
**********************
Entrée : CArbreBinaireEntier - * pABEArbreBinaire
Necessité : néant
Sortie : néant
Entraine : Modifie l'arbre binaire
*********************/

void CArbreBinaireEntier::ABEModifier_FilsGauche(CArbreBinaireEntier * pABEArbreBinaire)
{
	pABEFilsGauche = pABEArbreBinaire;
}

/*********************
Methode : Lire Fils droit
**********************
Entrée : néant
Necessité : néant
Sortie : CArbreBinaireEntier
Entraine : Retourne la lecture du fils droit
*********************/

CArbreBinaireEntier * CArbreBinaireEntier::ABELire_FilsDroit()
{
	return pABEFilsDroit;
}

/*********************
Methode : Modifier Droit
**********************
Entrée : CArbreBinaireEntier - * pABEArbreBinaire
Necessité : néant
Sortie : néant
Entraine : Modifie l'arbre binaire
*********************/

void CArbreBinaireEntier::ABEModifier_FilsDroit(CArbreBinaireEntier * pABEArbreBinaire)
{
	pABEFilsDroit = pABEArbreBinaire;
}

void CArbreBinaireEntier::ABEVider_Arbre()
{
	if(pABEFilsDroit != NULL){
		pABEFilsDroit->ABEVider_Arbre();
		delete pABEFilsDroit;
	}

	if(pABEFilsGauche != NULL){
		pABEFilsGauche->ABEVider_Arbre();
		delete pABEFilsGauche; 
	}
}


CArbreBinaireEntier & CArbreBinaireEntier::operator=(CArbreBinaireEntier & pABEArbreBinaire)
{

	iABEElement = pABEArbreBinaire.iABEElement;
	
	if (pABEArbreBinaire.pABEFilsGauche == NULL)
		pABEFilsGauche = NULL;
	else
		pABEFilsGauche = new CArbreBinaireEntier(*pABEArbreBinaire.pABEFilsGauche);

	if (pABEArbreBinaire.pABEFilsDroit == NULL)
		pABEFilsDroit = NULL;
	else
		pABEFilsDroit = new CArbreBinaireEntier(*pABEArbreBinaire.pABEFilsDroit);

	return *this;
}
