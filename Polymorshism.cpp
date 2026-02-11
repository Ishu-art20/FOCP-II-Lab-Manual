// polymorshism - overloading
#include<iostream>
using namespace std;
void welcome();    // declaration 
void welcome(string);
int main()
{
    welcome();
    welcome("Ishu");
    return 0;
}
void welcome()
{
    cout<<"Welcome Guest";
}
void welcome(string name)
{
    cout<<"\nWelcome "<<name;
}
