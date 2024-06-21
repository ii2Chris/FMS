#include "../inc/Account.h"
#include <iostream>

// Ensure the transactions vector is declared in Account.h
void Account::addTransaction(Transaction transaction) {
    transactions.push_back(transaction);
}

void Account::listTransactions() const {
    for (const auto& transaction : transactions) {
        cout << "Date: " << transaction.date
                  << ", Category: " << transaction.category
                  << ", Amount: $" << transaction.amount
                  << ", Description: " << transaction.description << endl;
    }
}

double Account::getCurrentBalance() const {
    double balance = 0.0;
    for (const auto& transaction : transactions) {
        balance += transaction.amount;
    }
    return balance;
}
