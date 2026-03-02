// class BankAccount
#include<iostream>
#include<string>
using namespace std;
class BankAccount
{    public:
    string accountHolderName;
    int accountNumber;
    double balance;
    void inputDetails()
    {
        cout<<"Enter accountHolderName,accountNumber,balance : ";
        cin>>accountHolderName>>accountNumber>>balance;
    }
    void displayDetails()
    {
        cout<<"AccountHolderName = "<<accountHolderName<<"\nAccountNumber = "<<accountNumber<<"\nBalance = "<<balance;
    }
    void deposit(double amount)
    {
         cout<<"Enter the amount to deposit : ";
         cin>>amount;
    }
    void withdraw(double amount)
    {   
        cout<<"Enter the amount to withdraw: ";
         cin>>amount;
         if(amount>balance)
            cout<<"You don't have enough balance to withdraw";
    }
};
int main() 
{   BankAccount b1;
    b1.inputDetails();
    b1.displayDetails();
    
    return 0;
}