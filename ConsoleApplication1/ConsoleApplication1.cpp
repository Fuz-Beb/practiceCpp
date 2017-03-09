#include "CABREntier.h"
#include <iostream>

using namespace std;

void main()
{
	CABREntier * pCABREntierRecherche = new CABREntier();
	CABREntier * pCABREntierRechercheGauche;
	CABREntier * pCABREntierRechercheDroit;

	pCABREntierRecherche->ABEModifier_Element(5);

	pCABREntierRecherche->ABRAjouterElement(6);
	pCABREntierRecherche->ABRAjouterElement(4);
	pCABREntierRecherche->ABRAjouterElement(4);
	pCABREntierRecherche->ABRAjouterElement(4);
	pCABREntierRecherche->ABRAjouterElement(10);

	cout << "Noeud parent : " << pCABREntierRecherche->ABELire_Element() << endl;
	cout << "Noeud fils gauche : " << pCABREntierRecherche->ABELire_FilsGauche()->ABELire_Element() << endl;
	cout << "Noeud fils droit : " << pCABREntierRecherche->ABELire_FilsDroit()->ABELire_Element() << endl;


	pCABREntierRecherche->ABRAjouterElement(10);
	pCABREntierRecherche->ABRRechercheElement(10);

	if(pCABREntierRecherche->ABRRechercheElement(11) == true)
		cout << "Trouver !!!" << endl;
}