#include"user.h"

user::user(string n, string u, string mail, int id, string p)
{
    name = n;
    username = u;
    email = mail;
    ID = id;
    password = p;
}

void user::changePassword(string newP)
{
    password = newP;
    cout<<"Password changed successfully!\n";
}

string user::getUsername()
{
    return username;
}

string user::getPassword()
{
    return password;
}

string user::getEmail()
{
    return email;
}