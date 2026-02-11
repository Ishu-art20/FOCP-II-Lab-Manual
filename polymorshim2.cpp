// polymorshism
#include<iostream>
using namespace std;
int sum(int,int);    // declaration 
float sum(float,float);
double sum(double,double);
int main()
{
    //sum(4,5);
    //cout<<"\nSum = "<<sum(4,5);
    cout<<sum(5,6);
    cout<<sum(5.6789f,6.7654f);
    cout<<sum(5.6789,6.7654);
    return 0;
}
int sum(int a,int b)
{
    cout<<"\nInt Sum = ";
    return (a+b);
}
float sum(float a,float b)
{
    cout<<"\nFloat Sum = ";
    return (a+b);
}
double sum(double a,double b)
{
    cout<<"\nDouble Sum = ";
    return (a+b);
}