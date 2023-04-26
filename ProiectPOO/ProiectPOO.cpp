#include "pch.h"
#include "Source.h"

using namespace System;

int x, t, y, z;
source d1, d2, d3;

void f();
void fr();

int main(array<System::String ^> ^ args)
{
    int finish = 1;
    char cit = 'r';
    do
    {
        r();
        cit = Console::ReadKey().KeyChar;
        switch (cit)
        {
        case '0':
        {
            finish = 0;
            break;
        }
        case '1':
        {
            system("cls");
            fr();
            f();
            d1.init(x, y, z, t);
            break;
        }
        case '2':
        {
            system("cls");
            fr();
            f();
            d2.init(x, y, z, t);
            break;
        }
        case '3':
        {
            system("cls");
            fr();
            f();
            d3.init(x, y, z, t);
            break;
        }
        case '4':
        {
            system("cls");
            d1.af();
            d2.af();
            d3.af();
            break;
        }
        case '5':
        {
            system("cls");
            pret();
            break;
        }
        case '6':
        {
            system("cls");
            fr();
            d1.mod(x);
            break;
        }
        case '7':
        {
            system("cls");
            fr();
            d2.mod(x);
            break;
        }
        case '8':
        {
            system("cls");
            fr();
            d3.mod(x);
            break;
        }
        }
        system("pause");
        system("cls");
    } while (finish);
    return 0;
}
void f()
{
    Console::WriteLine("Introduceti pret");
    y = Int32::Parse(Console::ReadLine());
    Console::WriteLine("Introduceti nr de stele");
    z = Int32::Parse(Console::ReadLine());
    Console::WriteLine("0) 1 pat simplu");
    Console::WriteLine("1) 1 pat dublu");
    Console::WriteLine("2) 2 paturi separate");
    Console::WriteLine("-1) nu schimba");
    t = Int32::Parse(Console::ReadLine());
    while (t < -1 || t > 2)
    {
        Console::WriteLine("Introduceti starea:");
        Console::WriteLine("0) 1 pat simplu");
        Console::WriteLine("1) 1 pat dublu");
        Console::WriteLine("2) 2 paturi separate");
        Console::WriteLine("-1) nu schimba");
        x = Int32::Parse(Console::ReadLine());
    }
}
void fr()
{
    Console::WriteLine("Introduceti starea:");
    Console::WriteLine("0) liber");
    Console::WriteLine("1) ocupat");
    Console::WriteLine("2) renovare");
    Console::WriteLine("-1) nu schimba");
    x = Int32::Parse(Console::ReadLine());
    while (x < -1 || x > 2)
    {
        Console::WriteLine("Introduceti starea:");
        Console::WriteLine("0) liber");
        Console::WriteLine("1) ocupat");
        Console::WriteLine("2) renovare");
        Console::WriteLine("-1) nu schimba");
        x = Int32::Parse(Console::ReadLine());
    }
}
void pret()
{
    int u, i;
    Console::WriteLine("1) Pret camere 1+2");
    Console::WriteLine("2) Pret camere 1+3");
    Console::WriteLine("3) Pret camere 2+3");
    Console::WriteLine("4) Pret camere 1+2+3");
    Console::WriteLine("0) Anulare");
    u = Int32::Parse(Console::ReadLine());
    switch (u)
    {
    case 0:
    {
        Console::WriteLine("Anulat");

        break;
    }
    case 1:
    {

        i = d1 + d2;
        Console::WriteLine(i);

        break;
    }
    case 2:
    {

        i = d1 + d3;
        Console::WriteLine(i);

        break;
    }
    case 3:
    {
        i = d2 + d3;
        Console::WriteLine(i);

        break;
    }
    case 4:
    {
        i = ((d1 + d1) + (d2 + d2) + (d3 + d3)) / 2;
        Console::WriteLine(i);

        break;
    }
    }
}