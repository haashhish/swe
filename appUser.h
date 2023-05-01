#ifndef APPUSER_H
#define APPUSER_H
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class appUser
{
    private:
    string name;
    string username;
    string email;
    int ID;
    string password;

    public:
    appUser(string n, string u, string mail, int id, string p);
    void changePassword(string newP);
    string getUsername();
    string getPassword();
    string getEmail();
};

#endif