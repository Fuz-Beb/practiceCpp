class CException
{

private:
	// Attributs
	unsigned int uiEXCValeur;

public:
	// Constructeur / Destructeur
	CException();
	~CException();

	// Methodes
	unsigned int EXCLecture();
	void EXCEcriture(unsigned int uiCodeErreur);
};

