#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
# include <string>
# include <iostream>
# include <iomanip>

//[19920104_091532] index:7;amount:16576;created
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(int deposit) {
//    std::cout << "deposit a: " << deposit << std::endl;
    _amount = deposit;
    _totalAmount += deposit;
    //_accountIndex = _accountIndex + 1;
    _nbAccounts += 1;
    _nbDeposits = 1;
    //_nbAccounts = 1;
    this->_nbWithdrawals = 0;
    //std::cout << "index:" << this->_accountIndex << ";" << "amount:" << _amount << ";created" << std::endl;
    std::cout << "index:" << "1" << ";" << "amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) {
    ;
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    if (_nbAccounts > 0)
        std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits << ";" << "withdrawals:" << _totalNbWithdrawals << ";" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_amount = _amount + deposit;
    //_totalAmount += deposit;
    _totalAmount += deposit;
    this->_nbDeposits = _nbDeposits + 1;
    _totalNbDeposits += 1;
    //std::cout << "deposit de: " << deposit << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    this->_amount = _amount;
    this->_nbWithdrawals = 1;
    _totalNbWithdrawals += 1;
    _totalAmount -= withdrawal;
    return 1;
}

int		Account::checkAmount( void ) const
{
    std::cout << this->_amount;
}

void	Account::displayStatus( void ) const
{
    std::cout << "index:" << "1" << ";" << "amount:" << this->_amount << ";" << "deposit:" << this->_nbDeposits << ";" << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
//[19920104_091532] index:7;amount:16576;created
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0