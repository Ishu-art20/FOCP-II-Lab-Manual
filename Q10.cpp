// leap / non leap year
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year : ";
    cin>>year;
    if((year%4==0 && year%100!=0) || year%400==0)
    cout<<"It's a leap year \nFebruary has 29 days";
    else 
    cout<<"It's not a leap year \nFebruary has 28 days";
   
    return 0;
}