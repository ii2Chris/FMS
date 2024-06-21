#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
using namespace std;

class Transaction {
public:
    double amount;
    string date, category, description;

    Transaction(double amount, string date, string category, string description);
};

#endif
