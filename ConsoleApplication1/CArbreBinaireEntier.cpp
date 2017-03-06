#include "stdio.h"
#include "CArbreBinaireEntier.h"

CArbreBinaireEntier::CArbreBinaireEntier()
{
	pABEFilsDroit = NULL;
	pABEFilsGauche = NULL;
}

CArbreBinaireEntier::CArbreBinaireEntier(CArbreBinaireEntier & pABEArbreBinaire)
{
	iABEElement = pABEArbreBinaire.iABEElement;
}

CArbreBinaireEntier::~CArbreBinaireEntier()
{

}

int CArbreBinaireEntier::ABELire_Element()
{

}

void CArbreBinaireEntier::ABEModifier_Element(CArbreBinaireEntier * pABEArbreBinaire, unsigned int uiElement)
{

}

CArbreBinaireEntier * CArbreBinaireEntier::ABELire_FilsGauche()
{

}


void CArbreBinaireEntier::ABEModifier_FilsGauche(CArbreBinaireEntier * pABEArbreBinaire)
{

}

CArbreBinaireEntier * CArbreBinaireEntier::ABELire_FilsDroit()
{

}

void CArbreBinaireEntier::ABEModifier_FilsDroit(CArbreBinaireEntier * pABEArbreBinaire)
{

}