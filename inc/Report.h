#ifndef REPORT_H
#define REPORT_H

#include "Account.h"

class Report {
private:
    Account account; // Ensure this declaration is present

public:
    Report(const Account& account);
    void generateReport() const;
};

#endif
