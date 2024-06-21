#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Transaction.h"
#include <vector>
using namespace std;

class Account {
private:
    vector<Transaction> transactions; // Ensure this declaration is present

public:
    void addTransaction(Transaction transaction);
    void listTransactions() const;
    double getCurrentBalance() const;
};

#endif
