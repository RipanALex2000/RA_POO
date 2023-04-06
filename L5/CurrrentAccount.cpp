#include "pch.h"
#include "CurrrentAccount.h"

CurrrentAccount::CurrrentAccount(String^ holder, double limit):BankAccount(holder),overdraftLimit(limit)
{

}
void CurrrentAccount::ChangeOverdraftLimit(double newLimit)
{
	overdraftLimit = newLimit;
}
double CurrrentAccount::GetOverdraftLimit()
{
	return overdraftLimit;
}
String^ CurrrentAccount::ToString()
{
	String^ result = BankAccount::ToString();
	result = String::Concat(result, ",Overdraft Limit: ");
	result = String::Concat(result, overdraftLimit.ToString());
	return result;
}
bool CurrrentAccount::CanDebit(double amount)
{
	return (amount <= GetBalance() + overdraftLimit);
}