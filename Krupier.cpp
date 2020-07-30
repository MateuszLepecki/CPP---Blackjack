#include "Krupier.h"
#include "Karta.h"
#include <iostream>
using namespace std;

CKrupier::CKrupier(void)
{
	for (int i = 0; i < 10; i++)
	{
		tab_kart_komp[i] = new CKarta;
		tab_kart_komp[i]->wartosc = 0;
	}
}


CKrupier::~CKrupier(void)
{
}

void CKrupier::zliczanie_pkt()
{
	suma = 0;
	for (int i = 0; i < 10; i++)
	{
		suma = suma + tab_kart_komp[i]->wartosc;
	}
}