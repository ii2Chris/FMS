#include "inc/User.h"
#include "inc/Account.h"
#include "inc/Transaction.h"
#include "inc/Report.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Finance Manager Initialized" << endl;

    // Placeholder main function
    User user("user123", "password123");
    Account account;
    account.addTransaction(Transaction(100.0, "2023-01-01", "Income", "Salary"));
    Report report(account);
    report.generateReport();

    return 0;
}
