// Accounts 
/* Create a class Account with account number and balance. 
Add a function displayAccount(). 
Derive a class SavingsAccount that includes interest rate and
 a function calculateInterest(). 
Demonstrate usage of both classes.*/
#include<iostream>
using namespace std;

class Account   //base class
{ 
   string account_no; 
   protected:
   float balance;
   public:
   Account(){
    cout<<"\n->Account default";
    account_no ="NA";
    balance = 0;
   }
   Account(string ano, float bal){
    cout<<"\n->Account parameterized";
    account_no =ano;
    balance = bal;
   }
   void displayAccount(){
    cout<<"\nAccount Number = "<<account_no<<"\nBalance = "<<balance;
   }
};
class SavingsAccount: public Account{    //public: here-mode of inheritance
    float interest_rate;
    public:
    SavingsAccount(){
       cout<<"\n->SavingsAccount default";
       interest_rate = 1; 
    }
    SavingsAccount(string Ano, float Bal,float i_rate):Account(Ano,Bal){
    cout<<"\n->SavingsAccount parameterized";
    interest_rate = i_rate;
    }
    void calculateInterest(){
        cout<<"\n--Your Account Details--";
        displayAccount();
        cout<<"\nYour Balance post interest rate = "<<(balance*(interest_rate/100));
    }
};
int main(){
   SavingsAccount a1, a2("asd3456",7800.9,10);
   a1.calculateInterest();
   a2.calculateInterest();
    return 0;
}