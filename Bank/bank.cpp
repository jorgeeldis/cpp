
#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>

using namespace std;

class account
{
    int acno;
    char name[50];
    int deposit;
    char type;

public:
    void create_account();
    void show_account() const;
    void modify();
    void dep(int);
    void draw(int);
    void report() const;
    int retacho() const;
    int retdeposit() const;
    char rettype() const;
};

void account::create_account()
{
    system("CLS");
    cout<<"\n\t\t\tEnter the account No. : ";
    cin>>acno;
    cout<<"\n\t\t\tEnter the name of the account holder: ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"\n\t\t\tEnter type of the account (C/S) : ";
    cin>>type;
    type=toupper(type);
    cout<<"\n\t\t\tEnter the initial amount: ";
    cin>>deposit;
    cout<<"\n\t\t\tAccount created...";
}

void account::show_account() const
{
    cout<<"\n\t\t\tAccount no. : " <<acno;
    cout<<"\n\t\t\tAccount holder name : " <<name;
    cout<<"\n\t\t\tType of account : " <<type;
    cout<<"\n\t\t\tBalance amount : " <<deposit;
}

void account::modify()
