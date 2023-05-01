#include"appUser.h"

appUser::appUser(string n, string u, string mail, int id, string p)
{
    name = n;
    username = u;
    email = mail;
    ID = id;
    password = p;
}

void appUser::changePassword(string newP)
{
    password = newP;
    cout<<"Password changed successfully!\n";
}

string appUser::getUsername()
{
    return username;
}

string appUser::getPassword()
{
    return password;
}

string appUser::getEmail()
{
    return email;
}