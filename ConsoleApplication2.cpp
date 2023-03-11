#include "pch.h"
#include <iostream>
#include <vector>
using namespace System;
using namespace std;

struct Persoana
{
    unsigned vs;
    char nume[20];
    char prenume[20];
};
class Pers {
private:
    unsigned vs;
    char nume[20];
    char prenume[20];
public:
    Pers(unsigned vs1, char* num1, char* prenum1)
    {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    unsigned arata_vs() { return this->vs; }
    char* arata_nume() { return this->nume; }
};
int main()
{
    char n[20], p[20];
    unsigned int a1=0;
    vector<Pers> v;
    Pers s;
   /*
    a1=17;
    strcpy_s(p1.nume, 4, "Ion");
    strcpy_s(p1.prenume, 7, "George");
    Console::WriteLine("Hello");
    cout<<p1.nume<<"\t" << p1.prenume << "\t" << endl;
    cout<<"Hello" << endl;
    Console::WriteLine("Utilizam clasa Pers!");
    Pers p2(20, "Ioescu", "George");
    Pers* p3 = new Pers(21, "Ionescu", "Adina");
    cout<<p2.arata_nume() << " " <<p2.arata_vs()<<endl;
    cout << p3->arata_nume() <<" " << p3->arata_vs() << endl;*/
    for (int i = 0; i < 3; i++)
    {
        cin >> a1 >> n >> p;
        Pers s(a1, n, p);
        v.push_back(s);
    }
    for (int i = 0 ; i < 3; i++)
    {
        cout << v[i].arata_nume() << " " << v[i].arata_vs() << endl;
    }
    Console::ReadKey();
    return 0;
}
