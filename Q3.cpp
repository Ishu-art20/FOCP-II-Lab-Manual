// fahrenheit to celsius and visa versa
#include<iostream>
using namespace std;
int main(){
    float c,f;
    int choice;
    cout<<"Convert : ";
    cout<<"\n 1.Fahrenheit to Celsius";
    cout<<"\n 2.Celsius to Fahrenheit";
    cout<<"\nEnter your Choice : ";
    cin>>choice;
    switch(choice){
        case 1: cout<<"Enter Temperature : ";
           cin>>f; 
           c=(f-32)/1.8;
           cout<<"Temperature in Celsius is : "<<c;
           break;
        case 2: cout<<"Enter Temperature : ";
           cin>>c;
           f=(1.8*c)+32;
           cout<<"Temperature in Fahrenheit is : "<<f;
           break;
        default:
           cout<<" ->Invalid Choice";
    }
    return 0;
}