#pragma once
#include "Karta.h"
class CKrupier
{
public:
	CKrupier(void);
	~CKrupier(void);
	CKarta *tab_kart_komp[10];
	void zliczanie_pkt();
	int suma = 0;
};

