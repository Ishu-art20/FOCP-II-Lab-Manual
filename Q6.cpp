
 #include<iostream>
using namespace std;
int main()
{
    int n;
    float b,s;
    cout<<"Enter No. of Employees : ";
    cin>>n;
    cout<<"Enter basic Salary of Employees : ";
    cin>>s;
    b = (0.12)*s;
    cout<<"Bonus Implemented : "<<b;
    float net_salary = b+(n*s);
    cout<<"\nNet Salary : "<<net_salary;
    return 0;
} 