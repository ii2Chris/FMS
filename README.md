**DISCLAMER**

I used ChatGPT 4o to helped me write a majority of the documentation of this project.
# Personal Finance Manager in C++

## Introduction
This project is a personal finance management tool built in C++. It allows users to track their expenses and incomes, and generate financial reports to better understand their spending habits. The main use is to showcase skills that I can list on my resume.

**Developed a Finance Management System**: leveraged object-oriented programming, data structures, higher-end critical thinking skills 
- Used specific finance analysis tools, such as tracking spending, and future and current expenses. 
- Designed and integrated an automated financial report generation, that provides the end user with valuable information about their spending trends, giving them personal insight into their financial health 
- The usage of object-oriented programming allows for optimized performance, reusing functions, and involving processes like recursion, scalable for future edits to be made.  
- The generative UI allows for dynamic and remote interaction with the program allowing for detailed categorization, editing, and deletion of financial entries.

## Features
- **User Account Management**: Register, Login, and manage user information securely.
- **Transaction Recording**: Record and categorize expenses and incomes with detailed descriptions.
- **Monthly Financial Reports**: Generate comprehensive reports and categorial breakdowns to analyze spending habits.
- **Data Persistence**: Save and load user data and transactions securely using file handling.

## Code Organization
### **Directory Structure**

```
FinanceManager/
├── inc/
│   ├── Account.h
│   ├── Report.h
│   ├── Transaction.h
│   └── User.h
├── src/
│   ├── Account.cpp
│   ├── Report.cpp
│   ├── Transaction.cpp
│   └── User.cpp
└── main.cpp

```
### **Class Design**
#### <u>User Class</u>: Handles user information and authentication.
- Store and manage user information (username. password)
- Authenticate users
- Ensure secure handling of data (prevent data loss)
#### <u>Transaction Class</u>: Represents a financial transaction (expense/income).
- Store transaction details such as amount, date, category and description
- Provide access methods to retrieve transaction information
- Serve as a data structure for recording financial activities
#### <u>Account Class</u>: Manages the transactions and balances.
- Store and manage a list of transactions
- Add and delete transactions
- Calculate and provide the current balance
#### <u>Report Class</u>: Generates financial reports.
- Generate reports that summarize spending income
- Provide insights into spending trends and financial health
- Format and present transaction data
### **Main Application Flow**
- User registration/login.
- Transaction management (add, view, delete).
- Generating reports.
### **Data Structures & Algorithms**
- Use lists or vectors to store transactions.
- Implement sorting algorithms for organizing transactions.
- Search algorithms for transaction retrieval.

## Contact Information
Email: ChrisBudhram03@outlook.com
GitHub: ii2Chris
Discord: copy2

## Test Cases

TBD
