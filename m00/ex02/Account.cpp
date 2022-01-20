#include "Account.hpp"
#include <ctime>
#include <cstddef>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
		: _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->checkAmount()
			  << ";created" << std::endl;
}

Account::Account(void) { }

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->checkAmount()
			  << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::_displayTimestamp(void)
{
	std::time_t now = std::time(nullptr);
	std::tm *local = std::localtime(&now);

	std::cout << std::setfill('0') << "["
			  << local->tm_year + 1900
			  << std::setw(2) << local->tm_mon + 1
			  << std::setw(2) << local->tm_mday
			  << "_"
			  << std::setw(2) << local->tm_hour
			  << std::setw(2) << local->tm_min
			  << std::setw(2) << local->tm_sec
			  << "] ";
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout
			<< "accounts:" << Account::getNbAccounts()
			<< ";total:" << Account::getTotalAmount()
			<< ";deposits:" << Account::getNbDeposits()
			<< ";withdrawals:" << Account::getNbWithdrawals()
			<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amout = this->checkAmount();

	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << p_amout
			  << ";deposit:" << deposit
			  << ";amount:" << this->checkAmount()
			  << ";nb_deposits:" << this->_nbDeposits
			  << std::endl;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->checkAmount()
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals
			  << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int p_amout = this->checkAmount();
	Account::_displayTimestamp();
	if (p_amout < withdrawal)
	{
		std::cout << "index:" << this->_accountIndex
				  << ";p_amount:" << p_amout
				  << ";withdrawal:refused"
				  << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << p_amout
			  << ";withdrawal:" << withdrawal
			  << ";amount:" << this->checkAmount()
			  << ";nb_withdrawals:" << this->_nbDeposits
			  << std::endl;
	return true;
}



