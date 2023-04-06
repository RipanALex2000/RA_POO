#pragma once
#include "BankAccount.h"
ref class CurrrentAccount:BankAccount
{
public:
	CurrrentAccount(String^ holder, double limit);
	void ChangeOverdraftLimit(double newLimit);
	double GetOverdraftLimit();
	virtual String^ ToString() override;
	virtual bool CanDebit(double amount) override;
private:
	double overdraftLimit;
};

