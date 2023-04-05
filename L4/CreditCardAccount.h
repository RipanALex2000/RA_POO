#pragma once
#include "LoyaltyScheme.h"
ref class CreditCardAccount
{
public:
	static int GNA();
	CreditCardAccount(long number,double limit);
	static CreditCardAccount();
	void SetCredutLinit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatment();
	long GetAccountNumber();
	void RedeemLoyaltyPoints();
	// literal String^ name = "Super Platinum Card"; error
private:
	static double interestRate;
	static int numberOfAccounts = 0;
	initonly long accountNumber;
	double currentbalance;
	double creditLimit;
	LoyaltyScheme^ scheme;
};

