#include "pch.h"
#include "CreditCardAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    /*
    int n = CreditCardAccount::GNA();
    Console::Write("Number of accounts initially: ");
    Console::WriteLine(n);
    Console::WriteLine("Creating first account");
    CreditCardAccount ^myAcount1;
    myAcount1 = gcnew CreditCardAccount(12345,2000);
    //myAcount->SetCredutLinit(1000);
    myAcount1->MakePurchase(300);
    //myAcount->MakeRepayment(700);
    myAcount1->PrintStatment();
    //long num = myAcount->GetAccountNumber();
    //Console::Write("Account number: ");
    //Console::WriteLine(num);
    Console::WriteLine("\nCreating second account");
    CreditCardAccount^ myAcount2;
    myAcount2 = gcnew CreditCardAccount(67890, 5000);
    myAcount2 ->MakePurchase(750);
    myAcount2->PrintStatment();
    n = CreditCardAccount::GNA();
    Console::Write("Number of accounts now: ");
    Console::WriteLine(n);
    */
    /*
    int n = CreditCardAccount::GNA();
    Console::Write("Number of account initially:");
    Console::WriteLine(n);
    Console::WriteLine("\nCreating first object");
    //Console::Write("Card name is "); 
   // Console::WriteLine(CreditCardAccount::name); error
    CreditCardAccount^ account1;
    account1 = gcnew CreditCardAccount(12345, 2000);
    */
    Console::WriteLine("Creating account object");
    CreditCardAccount^ account1;
    account1 = gcnew CreditCardAccount(12345, 2000);
    Console::WriteLine("\nMaking a purchase (300)");
    account1->MakePurchase(300);
    Console::WriteLine("\nMaking a purchase (700)");
    account1->MakePurchase(700);
    Console::WriteLine("\nMaking a purchase (500)");
    account1->MakePurchase(500);
    Console::WriteLine("\nRedeeming points");
    account1->RedeemLoyaltyPoints();
    return 0;
}
