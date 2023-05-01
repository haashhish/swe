#include"issue.h"

issue::issue(string t, string d, string email)
{
    num = (rand() % 500000)+1;
    title = t;
    issueDetails = d;
    userEmail = email;
    status = 0;
    cout<<"Issue no."<<num<<" was issued successfully!\n";
}

void issue::updateStatus(bool s)
{
    status = s;
}