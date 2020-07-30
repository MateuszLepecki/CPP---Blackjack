#include <iostream>
#include"Gracz.h"
#include "Krupier.h"
#include "Talia.h"

#pragma once
class COczko
{
public:
	COczko(void);
	~COczko(void);
	void run(void);
	CTalia talia;
	CGracz gracz;
	CKrupier krupier;
	char wybor;
	int granica;
	int petla;
};

