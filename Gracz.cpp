#include "Gracz.h"
#include"Talia.h"
#include"Krupier.h"
#include <iostream>
using namespace std;

CGracz::CGracz(void)
{
	for (int i = 0; i < 10; i++)
	{
		tab_kart_gracz[i] = new CKarta;
		tab_kart_gracz[i]->wartosc = 0;
	}
}


CGracz::~CGracz(void)
{
}


void CGracz::graj(CTalia* talia,CKrupier* krupier)
{
	int i=0;
	while (tab_kart_gracz[i]->wartosc != 0)
	{
		i++;
	}
	krupier->tab_kart_komp[i] = talia->daj_karte(kolejnosc);
	kolejnosc++;
	tab_kart_gracz[i] = talia->daj_karte(kolejnosc);
	kolejnosc++;
}

void CGracz::zliczanie_pkt()
{
	suma = 0;
	for (int i=0; i < 10; i++)
	{
		suma = suma + tab_kart_gracz[i]->wartosc;
	}
	cout << "Suma dotychczasowych punktow gracza to: " << suma << endl;
}