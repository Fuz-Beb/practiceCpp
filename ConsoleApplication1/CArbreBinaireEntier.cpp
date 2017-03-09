#include "CArbreBinaireEntier.h"
#include "CException.h"
#include <stdio.h>

/*********************
Constructeur par d�faut
**********************
Entr�e : n�ant
Necessit� : n�ant
Sortie : n�ant
Entraine : Fils droit et gauche sont initialis� � NULL
*********************/

CArbreBinaireEntier::CArbreBinaireEntier()
{
	pABEFilsDroit = NULL;
	pABEFilsGauche = NULL;
}

/*********************
Methode : Constructeur de recopie
**********************
Entr�e : CArbreBinaireEntier - & pABEArbreBinaire
Necessit� : n�ant
Sortie : n�ant
Entraine : Fils droit et gauche sont affect�s par rapport � l'argument
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
Entr�e : n�ant
Necessit� : Avoir un pABEFilsGauche et un pABEFilsDroit nulle(s) 
Sortie : n�ant
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
Entr�e : n�ant
Necessit� : n�ant
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
Entr�e : CArbreBinaireEntier - * pABEArbreBinaire et unsigned int - uiElement
Necessit� : n�ant
Sortie : n�ant
Entraine : affecte la valeur uiElement � iABEElement
*********************/

void CArbreBinaireEntier::ABEModifier_Element(unsigned int uiElement)
{
	iABEElement = uiElement;
}

/*********************
Methode : Lire Fils Gauche
**********************
Entr�e : n�ant
Necessit� : n�ant
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
Entr�e : CArbreBinaireEntier - * pABEArbreBinaire
Necessit� : n�ant
Sortie : n�ant
Entraine : Modifie l'arbre binaire
*********************/

void CArbreBinaireEntier::ABEModifier_FilsGauche(CArbreBinaireEntier * pABEArbreBinaire)
{
	pABEFilsGauche = pABEArbreBinaire;
}

/*********************
Methode : Lire Fils droit
**********************
Entr�e : n�ant
Necessit� : n�ant
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
Entr�e : CArbreBinaireEntier - * pABEArbreBinaire
Necessit� : n�ant
Sortie : n�ant
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
