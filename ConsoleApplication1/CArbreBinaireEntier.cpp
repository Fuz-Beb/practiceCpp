#include "CArbreBinaireEntier.h"
#include <stdio.h>

CArbreBinaireEntier::CArbreBinaireEntier()
{
	pABEFilsDroit = NULL;
	pABEFilsGauche = NULL;
}

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

CArbreBinaireEntier::~CArbreBinaireEntier()
{
	delete pABEFilsDroit;
	delete pABEFilsGauche;
}

int CArbreBinaireEntier::ABELire_Element()
{
	return iABEElement;
}

void CArbreBinaireEntier::ABEModifier_Element(CArbreBinaireEntier * pABEArbreBinaire, unsigned int uiElement)
{
	iABEElement = uiElement;
}

CArbreBinaireEntier * CArbreBinaireEntier::ABELire_FilsGauche()
{
	return pABEFilsGauche;
}


void CArbreBinaireEntier::ABEModifier_FilsGauche(CArbreBinaireEntier * pABEArbreBinaire)
{
	pABEFilsGauche = pABEArbreBinaire;
}

CArbreBinaireEntier * CArbreBinaireEntier::ABELire_FilsDroit()
{
	return pABEFilsGauche;
}

void CArbreBinaireEntier::ABEModifier_FilsDroit(CArbreBinaireEntier * pABEArbreBinaire)
{
	pABEFilsDroit = pABEArbreBinaire;
}