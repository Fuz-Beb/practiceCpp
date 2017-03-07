#include "CABREntier.h"
#include <stdio.h>


CABREntier::CABREntier()
{
	CArbreBinaireEntier();
}

CABREntier::CABREntier(CABREntier & ABREntier)
{
	CArbreBinaireEntier(ABREntier);
}

void CABREntier::ABRAjouterElement(int iElement)
{
	CABREntier * pABRtmp;
	
	if (iElement >= ABELire_Element())
		if (ABELire_FilsDroit() == NULL || ABELire_FilsDroit()->ABELire_Element() == iElement) {
			pABRtmp = new CABREntier;
			pABRtmp->ABEModifier_FilsDroit(ABELire_FilsDroit());
			ABEModifier_FilsDroit(pABRtmp);
		}

		else
			(CABREntier*)ABELireFilsDroit()->ABRAjouterElement(iElement);
	else {
		if (ABELire_FilsGauche() == NULL || ABELire_FilsGauche()->ABELire_Element() == iElement) {
			pABRtmp = new CABREntier;
			pABRtmp->ABEModifier_Element(iElement);
			pABRtmp->ABEModifier_FilsDroit(ABELire_FilsGauche());
			ABEModifier_FilsGauche(pABRtmp);
		}

		else
			(CABREntier*)ABELire_FilsGauche()->ABRAjouterElement(iElement);
	}
}

bool CABREntier::ABRRechercheElement(int iElement)
{
	if (ABELire_Element() == iElement)
		return true;

	else {
		if (ABELire_Element() > iElement) {
			if (ABELire_FilsGauche() != NULL)
				return (CABREntier*)ABELire_FilsGauche() = ABRRechercheElement(iElement);
		}
	}
}
