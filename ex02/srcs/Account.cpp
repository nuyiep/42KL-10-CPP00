/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:22:01 by plau              #+#    #+#             */
/*   Updated: 2023/04/08 15:28:05 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream> //std::cout, std::endl, time, strftime

/******************************************************************************/
/*						STATIC MEMBER INITIALIZATION						  */
/******************************************************************************/

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/******************************************************************************/
/*								GETTERS										  */
/******************************************************************************/

/* Returns the number of accounts */
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

/* Returns the total amount in all accounts */
int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

/* Returns the total number of deposits */
int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

/* Returns the total number of withdrawals */
int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

/******************************************************************************/
/*								SETTERS										  */
/******************************************************************************/

/* No setters functions */

/******************************************************************************/
/*						CONSTRUCTORS & DESTRUCTORS							  */
/******************************************************************************/

/* Constructor */
Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount = _totalAmount + initial_deposit;
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" 
		<< std::endl;
}

/* Destructor */
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed"
		<< std::endl;
}

/******************************************************************************/
/*							PUBLIC FUNCTIONS								  */
/******************************************************************************/

void	Account::makeDeposit(int deposit)
{
	int	old_amount = _amount;
	_totalAmount = _totalAmount + deposit;
	_amount = _amount + deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";p_amount:" << old_amount
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused"
			<< std::endl;
		return (false);
	}
	else
	{
		_amount = _amount - withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount = _totalAmount - withdrawal;
		std::cout << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
	}
	return (true);
}

int		Account::checkAmount(void) const
{
	return (_totalAmount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}

/******************************************************************************/
/*							PRIVATE FUNCTIONS								  */
/******************************************************************************/

/* [YEARMONTHDAY_HOURMINSEC] */
/* [19920104_091532] 		*/
/* 		without [] 15 		*/
/*  	+ 1 for \0 			*/
void	Account::_displayTimestamp(void)
{
	std::time_t	currenttime;
	std::tm		*timeinfo;
	char		timestamp[16];

	std::time(&currenttime); 
	/* get current time */
	/* stores the current time in seconds since the Epoch */
	/* stores in currentime = 1680863534 */
	timeinfo = std::localtime(&currenttime); 
	/* convert it to local timezone (Malaysia) */
	/* returns a pointer to timeinfo */
	/* time info will print out 0x7faab2405800 - memory address*/
	/* If we want to print out the content of time info */
	/* use - std::cout << "time info content: " << std::asctime(timeinfo); */
	/* will print out - Fri Apr  7 18:38:19 2023 */

	std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", timeinfo);
	/* To change the format of timeinfo */
	
	std::cout << "[" << timestamp << "]";
}
