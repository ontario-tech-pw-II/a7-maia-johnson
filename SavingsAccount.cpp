#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	interestRate = rate;
}

double SavingsAccount::calculateInterest() {
	return getBalance()*(interestRate/100);
} 
void SavingsAccount::display(ostream & os) const
{
	os << "Account Type: Savings" << endl;
    os << "Balance: " << getBalance() << endl;
    os << "Interest Rate (%): " << interestRate*100 << endl;
}