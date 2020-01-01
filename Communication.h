#pragma once
#include "DialBoitier.h"

class CCommunication
{
private:
	CDialBoitier *ptrCDialBoitier;

public:
	CCommunication();
	~CCommunication();

	CCommunication(CDialBoitier *ptra);
	
	void EcrireValeur(int valeur, int numAfficheur);
	void EcrireMot(int valeurMot);
	void compteur();
};

