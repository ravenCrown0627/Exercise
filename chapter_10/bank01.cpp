#include <iostream>
#include "bank00.h"

using std::cout;
using std::endl;

Bank::Bank()
{
	name = "Hello";
	acc_num = NULL;
	balance = 0.0;
}

Bank::Bank(const std::string& m_name, int m_acc_num, double m_balance)
{
	name = m_name;
	acc_num = m_acc_num;
	balance = m_balance;
}

void Bank::show() const
{
	cout << "Name: " << name << endl;
	cout << "Account number: " << acc_num << endl;
	cout << "Balance: " << balance << endl;
}

void Bank::deposite(double dep_money)
{
	cout << "Money going to deposite: " << dep_money << endl;
	balance = balance + dep_money;
	this->show();
}

void Bank::withdraw(double with_money)
{
	cout << "Money going to withdraw: " << with_money << endl;

	if (balance > with_money)
		balance = balance - with_money;
	else
		cout << "Balance not enough\n";
	this->show();
}

Bank::~Bank()
{
	cout << "The object " << name << " is deleted.\n";
	cout << "Bye!\n";
}
