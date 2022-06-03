#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts),
      _amount(initial_deposit),
      _nbDeposits(0),
      _nbWithdrawals(0)
{
    ++_nbAccounts;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}

void Account::makeDeposit(int deposit)
{
    int pastAmount;

    pastAmount = _amount;
    _amount += deposit;
    ++_nbDeposits;
    ++_totalNbDeposits;
    _totalAmount += deposit;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << pastAmount
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    int pastAmount;
    bool isValid;

    isValid = true;
    pastAmount = _amount;
    if (_amount < withdrawal || withdrawal <= 0)
        isValid = false;
    else
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        ++_nbWithdrawals;
        ++_totalNbWithdrawals;
    }

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << pastAmount;
    if (isValid)
        std::cout << ";withdrawal:" << withdrawal
                  << ";amount:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals;
    else
        std::cout << ";withdrawal:refused";
    std::cout << std::endl;

    return isValid;
}

int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t time;
    char timeStamp[30];

    std::time(&time);
    std::strftime(timeStamp, 30, "%Y%m%d_%H%M%S",
                  std::localtime(&time));

    std::cout << "[" << timeStamp << "]";

    // std::cout << "[19920104_091532]"; //compare with given log
}