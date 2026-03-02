// forward referencing // if void is before int main it's backward referencing
#include<iostream>
using namespace std;
void welcome();    // declaration 
int main()
{
    welcome();
}
void welcome()
{
    cout<<"Welcome Guest";
}