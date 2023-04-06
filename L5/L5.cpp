#include "pch.h"
#include "CurrrentAccount.h"
#include "SavingsAccount.h"
using namespace System;

int main(array<System::String ^> ^args)
{   /* 
    CurrrentAccount acc("Me",2000.0);
    acc.Credit(100.0);
    double balance = acc.GetBalance();
    double overdraft = acc.GetOverdraftLimit();

    Console::WriteLine("Balance: {0}", balance);
    Console::WriteLine("Overdraft: {0}", overdraft);

    SavingsAccount::SetInterestRate(2.5);
    SavingsAccount sacc("You");
    double rate = sacc.GetInterestRate();

    Console::WriteLine("Interest rate: {0}", rate);
    */
    Console::WriteLine("Testing te currentAccount");
    CurrrentAccount curent("Jane", 100);
    curent.Credit(100);

    if (curent.Debit(550) == true)
    {
        Console::WriteLine("Debit(550) ok");
    }
    else
    {
        Console::WriteLine("Debit(550) failed");
    }
    if (curent.Debit(100) == true)
    {
        Console::WriteLine("Debit(100) ok");
    }
    else
    {
        Console::WriteLine("Debit(100) failed");
    }
    Console::WriteLine(curent.ToString());
    
    Console::WriteLine("/nTesting te SavingsAccount");
    SavingsAccount saving("Fred");
    saving.Credit(500);

    if (saving.Debit(50) == true)
    {
        Console::WriteLine("Debit(50) ok");
    }
    else
    {
        Console::WriteLine("Debit(50) failed");
    }
    if (saving.Debit(46) == true)
    {
        Console::WriteLine("Debit(46) ok");
    }
    else
    {
        Console::WriteLine("Debit(46) failed");
    }
    Console::WriteLine(saving.ToString());

    return 0;
}
