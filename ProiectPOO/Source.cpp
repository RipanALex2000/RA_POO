#include "pch.h"
#include "Source.h"

source::source()
{
	stare = 0;
	pret = 0;
	stele = 0;
	tip = 0;
};
void source::init(int x, int y, int z, int t)
{
	if (x != -1)
		this->stare = x;
	if (y != -1)
		this->pret = y;
	if (z != -1)
		this->stele = z;
	if (t != -1)
		this->tip = t;
}
void source::af()
{
	Console::WriteLine("");
	Console::WriteLine("Detalii Camera:");
	Console::Write("Stare:");
	switch (this->stare)
	{
	case 0:
	{

		Console::WriteLine("Liber");

		break;
	}
	case 1:
	{
		Console::WriteLine("Ocupat");

		break;
	}
	case 2:
	{
		Console::WriteLine("Renovare");

		break;
	}
	}
	Console::Write("Pret:");
	Console::WriteLine(this->pret);
	Console::Write("Stele:");
	Console::WriteLine(this->stele);
	Console::Write("Tip:");
	switch (this->tip)
	{
	case 0:
	{
		Console::WriteLine("1 pat simplu");

		break;
	}
	case 1:
	{
		Console::WriteLine("1 pat dublu");

		break;
	}
	case 2:
	{
		Console::WriteLine("2 paturi separate");

		break;
	}
	}
	Console::WriteLine("");
}
void source::mod(int x)
{
	if (x != -1)
		this->stare = x;
}

void r()
{
	Console::WriteLine("Insert Number:");
	Console::WriteLine("0) exit;");
	Console::WriteLine("1) Introduceti date pt camera 1;");
	Console::WriteLine("2) Introduceti date pt camera 2;");
	Console::WriteLine("3) Introduceti date pt camera 3;");
	Console::WriteLine("4) Afisati stariile celor 3 camere;");
	Console::WriteLine("5) Plata pt a inchirierea a 2/tuturor camerelor;");
	Console::WriteLine("6) Modificarea starii camerei 1;");
	Console::WriteLine("7) Modificarea starii camerei 2;");
	Console::WriteLine("8) Modificarea starii camerei 3;");
}
