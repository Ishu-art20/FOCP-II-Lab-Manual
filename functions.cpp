// forward referrening
#include<iostream>
using namespace std;
void welcome();    // declaration 
int main(){
    welcome();
}
void welcome()
{
    cout<<"Welcome Guest";
}