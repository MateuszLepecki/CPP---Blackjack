#include "Talia.h"
#include "Karta.h"
#include<iostream>
#include <cstdlib>
#include<time.h>

using namespace std;

CTalia::CTalia(void)
{
	int z = 0;
	for (int i = 0; i < 52; i++)
	{
		tab_kart[i] = new CKarta;
	}
	for (int j = 0; j < 13; j++)
	{
		tab_kart[z]->kolor = 3;
		tab_kart[z + 1]->kolor = 4;
		tab_kart[z + 2]->kolor = 5;
		tab_kart[z + 3]->kolor = 6;
		z = z + 4;
	}
	z = 0;
	for (int k = 0; k < 4; k++)
	{
		tab_kart[z]->wartosc = 2;
		tab_kart[z + 1]->wartosc = 3;
		tab_kart[z + 2]->wartosc = 4;
		tab_kart[z + 3]->wartosc = 5;
		tab_kart[z + 4]->wartosc = 6;
		tab_kart[z + 5]->wartosc = 7;
		tab_kart[z + 6]->wartosc = 8;
		tab_kart[z + 7]->wartosc = 9;
		tab_kart[z + 8]->wartosc = 10;
		tab_kart[z + 9]->wartosc = 2;
		tab_kart[z + 10]->wartosc = 3;
		tab_kart[z + 11]->wartosc = 4;
		tab_kart[z + 12]->wartosc = 11;
		z = z + 13;
	}
}

CTalia::~CTalia(void)
{
}

void CTalia::info()
{
	for (int i = 0; i < 52; i++)
	{
		cout <<"Nr: "<< i+1<<" ";
		tab_kart[i]->info();
	}
	cout << endl;
}
void CTalia::tasuj()
{
	srand(time(0));
	CKarta *pomocniczy;
	for (int i = 0; i < 52; i++)
	{
		int r;
		r = rand() % 52;
		pomocniczy = tab_kart[i];
		tab_kart[i] = tab_kart[r];
		tab_kart[r] = pomocniczy;
	}
}
CKarta* CTalia::daj_karte(int nr_karty)
{
	return tab_kart[nr_karty];
}