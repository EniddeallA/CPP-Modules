/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 08:18:53 by eniddealla        #+#    #+#             */
/*   Updated: 2022/03/14 03:13:23 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <time.h>
#include <iostream>
#include <iomanip>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account( void ){}

Account::Account( int initial_deposit ):
	_accountIndex(Account::_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	this->_totalAmount += this->_amount;
	this->_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _amount << ';'
				<< "created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _amount << ';'
				<< "closed" << std::endl;
}

int		Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout	<< " accounts:" << Account::getNbAccounts() << ';'
				<< "total:" << Account::getTotalAmount() << ';'
				<< "deposits:" << Account::getNbDeposits() << ';'
				<< "withdrawals:" << Account::getNbWithdrawals()
				<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	int	const	_prev_amount = _amount;

	_amount += deposit;
	_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _prev_amount << ';'
				<< "deposit:" << deposit << ';'
				<< "amount:" << _amount << ';'
				<< "nb_deposits:" << _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	int const	_prev_amount = _amount;

	if (withdrawal > _amount) {
		Account::_displayTimestamp();
		std::cout	<< " index:" << _accountIndex << ';'
					<< "amount:" << _amount << ';'
					<< "withdrawal:" << "refused"
					<< std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _prev_amount << ';'
				<< "withdrawal:" << withdrawal << ';'
				<< "amount:" << _amount << ';'
				<< "nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _amount << ';'
				<< "deposits:" << _nbDeposits << ';'
				<< "withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp( void ) {
	time_t		ttime;
	struct tm	*tm;

	time(&ttime);
	tm = localtime(&ttime);

	std::cout << "[";
	std::cout << std::setfill('0') << std::setw(4) << tm->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_sec;
	std::cout << "]";
}