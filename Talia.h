#include "Karta.h"
#pragma once
class CTalia
{

public:
	CTalia(void);
	~CTalia(void);
	CKarta* daj_karte(int nr_karty);
	CKarta* tab_kart[52];
	void tasuj();
	void info();
};

