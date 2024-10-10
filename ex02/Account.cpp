#include "Account.hpp"

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp(void)
{
    time_t now = time(0);
    tm *ptr = localtime(&now);
    std::cout << "[" << 1900 + ptr->tm_year 
    << 1 + ptr->tm_mon << ptr->tm_mday 
    << "_" << ptr->tm_hour << ptr->tm_min 
    << ptr->tm_sec << "] ";
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() 
        << ";total:" << Account::getTotalAmount() 
        << ";deposits:" << Account::getNbDeposits() 
        << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
        << ";amount:" << this->_amount 
        << ";created" << std::endl;
}

void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
        << ";amount:" << this->_amount 
        << ";deposits:" << this->_nbDeposits 
        << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
        << ";p_amount:" << this->_amount - deposit 
        << ";deposit:" << deposit 
        << ";amount:" << this->_amount 
        << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > this->_amount)
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex 
            << ";p_amount:" << this->_amount 
            << ";withdrawal:refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
        << ";p_amount:" << this->_amount + withdrawal 
        << ";withdrawal:" << withdrawal 
        << ";amount:" << this->_amount 
        << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

Account::~Account(void)
{
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
        << ";amount:" << this->_amount 
        << ";closed" << std::endl;
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

