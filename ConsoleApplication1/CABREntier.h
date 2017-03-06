#include "CArbreBinaireEntier.h"

class CABREntier : public CArbreBinaireEntier
{

public:
	// Constructeurs / Destructeur
	CABREntier();
	CABREntier(CABREntier & param);
	~CABREntier();

	// Méthodes
	void ABRAjouterElement(int iElement);
	bool ABRRechercheElement(int iElement);

};