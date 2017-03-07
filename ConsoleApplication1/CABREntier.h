#include "CArbreBinaireEntier.h"

class CABREntier : public CArbreBinaireEntier
{

public:
	// Constructeurs / Destructeur
	CABREntier();
	CABREntier(CABREntier & param);

	// Méthodes
	void ABRAjouterElement(int iElement);
	bool ABRRechercheElement(int iElement);

};