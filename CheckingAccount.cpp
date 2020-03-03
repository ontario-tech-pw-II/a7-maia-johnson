#include "CheckingAccount.h"

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	transactionFee = fee;
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	setBalance(getBalance() + amount);
    chargeFee();
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	if(amount > getBalance()){
        return false;
    }
    else{
        setBalance(getBalance() - amount); 
        chargeFee();
        return true;
    }
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	setBalance(getBalance() + - transactionFee); 
}

void CheckingAccount::display(ostream & os) const
{
	os << "Account Type: Checking" << endl;
    os << "Balance: " << getBalance() << endl;
    os << "Transaction Fee: " << transactionFee << endl;
}