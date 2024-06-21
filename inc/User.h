#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
public:
    User(const string& username, const string& password);
    bool authenticate(const string& username, const string& password) const;

private:
    string username;
    string password;
};

#endif
