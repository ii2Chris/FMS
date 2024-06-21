#include "../inc/Report.h"
#include <iostream>

Report::Report(const Account& account) : account(account) {}

void Report::generateReport() const {
    cout << "Generating report..." << endl;
    account.listTransactions();
    cout << "Current Balance: $" << account.getCurrentBalance() << endl;
}
