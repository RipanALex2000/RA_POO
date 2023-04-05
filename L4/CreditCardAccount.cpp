
#include "pch.h"
#include "CreditCardAccount.h"
#using <mscorlib.dll>

using namespace System;

void CreditCardAccount::PrintStatment()
{

	Console::Write("Curent balance: ");
	Console::WriteLine(currentbalance);
}
void CreditCardAccount::SetCredutLinit(double amount)
{
	creditLimit = amount;
}
bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentbalance + amount > creditLimit)
		return false;
	else
	{
		currentbalance += amount;
		if (currentbalance >= creditLimit / 2)
		{
			if (scheme == nullptr)
			{
			
				scheme = gcnew LoyaltyScheme();
			}
			else
			{
				
				scheme->EarnPointsOnAmount(amount);
			}
		}
		return true;
	}
}
void CreditCardAccount::MakeRepayment(double amount)
{
	currentbalance -= amount;
}
long CreditCardAccount::GetAccountNumber()
{
	return accountNumber;
}
int CreditCardAccount::GNA()
{
	return numberOfAccounts;
}
CreditCardAccount::CreditCardAccount(long number, double limit)
{
	scheme = nullptr;
	accountNumber = number;
	creditLimit = limit;
	currentbalance = 0.0;
	numberOfAccounts++;
	Console::Write("Account number: ");
    Console::WriteLine(numberOfAccounts);
}
static CreditCardAccount::CreditCardAccount()
{
	interestRate = 4.5;
	Console::WriteLine("Static constructor called");
}
void CreditCardAccount::RedeemLoyaltyPoints()
{
	if (scheme == nullptr)
	{
	
		Console::WriteLine("Sorry, you do not have a loyalty scheme yet");
	}
	else
	{
		
		Console::Write("Points available: ");
		Console::Write(scheme->GetPoints());
		Console::Write(". How many points do you want to redeem? ");
	
		String^ input = Console::ReadLine();
		int points = Convert::ToInt32(input);
	
		scheme->RedeemPoints(points);
		
		Console::Write("Points remaining: ");
		Console::WriteLine(scheme->GetPoints());
	}
}
