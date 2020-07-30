#include "Oczko.h"
#include <iostream>
#include"Gracz.h"
#include "Krupier.h"
#include "Talia.h"
using namespace std;

COczko::COczko(void)
{
}


COczko::~COczko(void)
{
}


void COczko::run(void)
{
	talia.info();
	talia.tasuj();
	cout << "Do jakiej wartosci gramy?" << endl;
	cin >> granica;
	gracz.graj(&talia, &krupier);
	gracz.zliczanie_pkt();
	krupier.zliczanie_pkt();

	if ((krupier.suma > granica) && (gracz.suma > granica))
	{
		cout << "obaj macie za duzo" << endl;
	}
	else if ((krupier.suma> granica) || (gracz.suma == granica))
	{
		cout << "Wygrales!!!" << endl;
	}
	else if ((gracz.suma > granica) || (krupier.suma == granica))
	{
		cout << "Przegrales" << endl;
	}
	else
	{
		cout << "grasz dalej?" << endl << "t - tak" << endl << "n - nie" << endl;
		cin >> wybor;
		while (wybor == 't')
		{
			gracz.graj(&talia, &krupier);
			gracz.zliczanie_pkt();
			krupier.zliczanie_pkt();
			if ((krupier.suma > granica) && (gracz.suma > granica))
			{
				cout << "obaj macie za du¿o" << endl;
				wybor = 'n';
				petla = 1;
			}
			else if ((krupier.suma> granica) || (gracz.suma == granica))
			{
				cout << "Wygrales!!!" << endl;
				wybor = 'n';
				petla = 1;
			}
			else if ((gracz.suma > granica) || (krupier.suma == granica))
			{
				cout << "Przegrales" << endl;
				wybor = 'n';
				petla = 1;
			}
			else
			{
				cout << "grasz dalej?" << endl << "t - tak" << endl << "n - nie" << endl;
				cin >> wybor;
			}
			
		}
	}
	if (petla != 1)
	{
		krupier.zliczanie_pkt();
		if ((gracz.suma > krupier.suma) || ((krupier.suma> granica) || (gracz.suma == granica)))
		{
			cout << "WYGRALES!!" << endl << " Twoj wynik to: " << gracz.suma << ", a PC: " << krupier.suma << endl;
		}
		else if ((gracz.suma < krupier.suma) || ((gracz.suma > granica) || (krupier.suma == granica)))
		{
			cout << "PRZEGRALES!!" << endl << " Twoj wynik to: " << gracz.suma << ", a PC: " << krupier.suma << endl;
		}
		else if (gracz.suma == krupier.suma)
		{
			cout << "REMIS!!" << endl << " Twoj wynik to: " << gracz.suma << ", a PC: " << krupier.suma << endl;
		}
	}	
	else cout <<" Twoj wynik to: " << gracz.suma << ", a PC: " << krupier.suma << endl;
}

