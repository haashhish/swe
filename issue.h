#ifndef ISSUE_H
#define ISSUE_H
#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

using namespace std;

class issue
{
    private:
    int num;
    string title;
    string issueDetails;
    string userEmail;
    bool status;

    public:
    issue(string t, string d, string email);
    void updateStatus(bool s);
};

#endif