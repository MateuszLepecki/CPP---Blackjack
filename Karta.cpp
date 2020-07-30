#include "Karta.h"
#include <iostream>
#include <string>
using namespace std;

CKarta::CKarta(void)
	: kolor()
	, wartosc()
{
}


CKarta::~CKarta(void)
{
}


void CKarta::info()
{
	cout << "kolor: " << kolor << ", wartosc: " << wartosc << endl;
}
