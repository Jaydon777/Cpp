#include<iostream>
#include<string>

//class account declaration and definition
class account
{
public:
char name[30];
int acc_num,acc_type;
int balance;
int amount;

//to initialize instance members
void get()
{

cout<<"\nAccount number :";
cin>>acc_num;
cin>>acc_type;
cin>>balance;
}

//to display balance
void display()
{
cout<<"\nYour Account Balance :"<<balance;
}

//to withdraw money from account
// void withdraw()
// {
// cout<<"\nEnter the amount you want to withdraw :";
// cin>>amount;
// if(amount>balance)
// cout<<"\nInsuficient balance";
// else
// balance-=amount;
// display();
// }
};

//class current account
class cur_acct:public account
{
public:
void pen()
{
if(balance<200 && acc_type==2)
{
balance-=20;
display();
}
}
};

//class saving account
class sav_acct:public account
{
public:
void interest()
{
int t;
cout<<"\nEnter time interval in year:";
cin>>t;
balance=balance*(1+2*t);
display();
}
};

//main() to test account
int main()
{
account ac;
ac.get();
ac.display();
// ac.withdraw();
return 0;
}