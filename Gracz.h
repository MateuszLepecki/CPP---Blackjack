#pragma once
#include "Karta.h"
#include"Talia.h"
#include "Krupier.h"
class CGracz
{
public:
	CGracz(void);
	~CGracz(void);
	void graj(CTalia*,CKrupier*);
	CKarta* tab_kart_gracz[10];
	int kolejnosc = 0;
	void zliczanie_pkt();
	int suma = 0;
};

