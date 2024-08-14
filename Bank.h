#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Bank {
    public:
        void addAccount(string accountNumber, double initialBalance);
        double getBalance(string accountNumber);
        int addBalance(string accountNumber, double balance);
        int minusBalance(string accountNumber, double balance);
    private:
        struct BankAccount {
            string accountNumber;
            double balance;
        };
        
        vector<BankAccount> accounts;
        int findAccountIndex(string accountNumber);

};


#endif 