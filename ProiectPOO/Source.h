#pragma once
#include <windows.h>
#include <cstring>
using namespace System;
using namespace std;

class source
{
	int c;
	int stare;
	int pret;
	int stele;
	int tip;

public:
	source();
	void init(int x, int y, int z, int t);
	void af();
	void mod(int x);
	int operator+(source s)
	{
		c = pret + s.pret;
		return c;
	};
	friend void pret();
};

void r();