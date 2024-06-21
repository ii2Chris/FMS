#include "../inc/User.h"

User::User(const string& username, const string& password)
    : username(username), password(password) {}

bool User::authenticate(const string& username, const string& password) const {
    return this->username == username && this->password == password;
}
