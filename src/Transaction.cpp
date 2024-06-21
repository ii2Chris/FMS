#include "../inc/Transaction.h"

Transaction::Transaction(double amount, string date, string category, string description)
    : amount(amount), date(date), category(category), description(description) {}
