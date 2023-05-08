#ifndef REPORT_H
#define REPORT_H
#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

using namespace std;

class report
{
    private:
    int num;
    string title;
    string issueDetails;
    string userEmail;
    bool status;

    public:
    report(string t, string d, string email);
    void updateStatus(bool s);
};

#endif