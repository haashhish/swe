#include<iostream>
#include<vector>
#include"user.h"
#include"report.h"

using namespace std;

void createIssue(vector<report> *reports, vector<user> *allUsers)
{
    vector<user>::iterator itUsers = allUsers->begin();
    vector<report>::iterator itIssues = reports->begin();
    string email;
    string title;
    string details;
    bool notDone=0;
    cout<<"Enter your email: ";
    cin>>email;
    while(itUsers != allUsers->end())
    {
        if(itUsers->getEmail() == email)
        {
            cout<<"Issue title:";
            cin>>title;
            cin.clear();
            cin.sync();
            cout<<"Enter report details: ";
            std::getline(std::cin, details);
            report newOne = report(title, details, email);
            reports->push_back(newOne);
            notDone=1;
        }
        itUsers++;
    }
    if(!notDone)
    {
        cout<<"User not found to open an report\n";
    }
}

void changePw(vector<user> *users)
{
    vector<user>::iterator it = users->begin();
    string username;
    string password;
    string newPassword;
    cout<<"Enter your username: ";
    cin >> username;
    bool found=false;
    while(it != users->end())
    {
        if(it->getUsername() == username)
        {
            cout<<"Confirm your password: ";
            cin >> password;
            cout<<"Enter new password: ";
            cin>>newPassword;
            found = true;
            if(it->getPassword() == password)
            {
                it->changePassword(newPassword);
                break;
            }
            else
            {
                cout<<"CANNOT change password since authentication failed!\nMake sure to correctly type your old password to confirm.\n";
                break;
            }
        }
        it++;
    }
    if(!found)
    {
        cout<<"User not found\n";
    }
}

void createUser(vector<user> *users)
{
    string name;
    string username;
    string email;
    int id;
    string password;
    string password2;
    cin.clear();
    cin.sync();
    cout<<"Enter your name: ";
    std::getline(std::cin, name);
    cout<<"Enter a username: ";
    cin>>username;
    cout<<"Enter your email: ";
    cin>>email;
    cout<<"Enter your ID: ";
    cin>>id;
    cout<<"Enter a password: ";
    cin>>password;
    cout<<"Re-Enter your password: ";
    cin>>password2;
    while(password != password2)
    {
        cout<<"Passwords don't match\n";
        cout<<"Enter a password: ";
        cin>>password;
        cout<<"Re-Enter your password: ";
        cin>>password2;
    }
    user newUser = user(name,username,email,id,password);
    users->push_back(newUser);
    cout<<"User is created successfully\n";
}

int main()
{
    vector<user> allUsers;
    vector<report> allIssues;
    char choice;
    cout<<"NOTE: a user must be created to be able to report an report or change the password\n";
    cout<<"Welcome to simulation\n";
    cout<<"---------------------\n";
    do
    {
        cout<<"Menu:\n";
        cout<<"-----\n";
        cout<<"1- Create a new user\n";
        cout<<"2- Change password\n";
        cout<<"3- Report an report\n";
        cout<<"4- Exit\n";
        cout<<"Enter choice:";
        cin>>choice;
        if(choice=='1')
        {
            createUser(&allUsers);
        }
        else if(choice == '2')
        {
            changePw(&allUsers);
        }
        else if(choice == '3')
        {
            createIssue(&allIssues, &allUsers);
        }
        else if(choice == '4')
        {
            cout<<"BYE!\n";
            exit(1);
        }
    }while(1);
}