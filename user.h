#ifndef USER_H
#define USER_H
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class user
{
    private:
    string name;
    string username;
    string email;
    int ID;
    string password;

    public:
    user(string n, string u, string mail, int id, string p);
    void changePassword(string newP);
    string getUsername();
    string getPassword();
    string getEmail();
};

#endif