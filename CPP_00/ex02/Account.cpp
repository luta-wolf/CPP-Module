/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:48:45 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/01 19:19:35 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Дата и время
void	Account::_displayTimestamp()
{
	time_t t = time(NULL);
	struct tm *aTm = localtime(&t);

	std::cout << "[";
	std::cout << std::setfill('0') << aTm->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << aTm->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << aTm->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << aTm->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << aTm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << aTm->tm_sec;
	std::cout << "] ";
}

// Конструктор / Деструктор
Account::Account( int initial_deposit ) //42
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount = _totalAmount + _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
// Геттеры ---------------------------------------

int Account::getNbAccounts()
{
	return _nbAccounts;
}


int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

int		Account::checkAmount() const
{
	return 0;
}

// ----------------------------------------------
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";deposits:" << deposit;
	_amount = _amount + deposit;
	std::cout << ";amount:" << _amount;
	_nbDeposits++;
	_totalAmount = _totalAmount + deposit;
	_totalNbDeposits++;
	std::cout << ";nb_deposits:" << _nbDeposits <<
	std::endl;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:";

	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		_amount = _amount - withdrawal;
		std::cout << withdrawal
				<< ";amount:" << _amount;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount = _totalAmount - withdrawal;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
