class CArbreBinaireEntier
{
private:
	// Attributs
	int iABEElement;
	CArbreBinaireEntier * pABEFilsGauche;
	CArbreBinaireEntier * pABEFilsDroit;

public:
	// Constructeurs / Destructeur
	CArbreBinaireEntier();
	CArbreBinaireEntier(CArbreBinaireEntier & pABEArbreBinaire);
	~CArbreBinaireEntier();

	// Methodes
	int ABELire_Element();
	void ABEModifier_Element(CArbreBinaireEntier * pABEArbreBinaire, unsigned int uiElement);
	CArbreBinaireEntier * ABELire_FilsGauche();
	void ABEModifier_FilsGauche(CArbreBinaireEntier * pABEArbreBinaire);
	CArbreBinaireEntier * ABELire_FilsDroit();
	void ABEModifier_FilsDroit(CArbreBinaireEntier * pABEArbreBinaire);
	// Si temps supplémentaire faire ABEViderArbre

};