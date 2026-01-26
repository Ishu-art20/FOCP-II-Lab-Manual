// Avg of 3 
#include<iostream>
#include<iomanip>
int main()
{
    int a,b,c,sum;
    float avg;
    std::cout<<"Enter Three No.s : ";
    std::cin>>a>>b>>c;
    std::cout<<"Values are : "<<a<<" "<<b<<" "<< c;
    sum=a+b+c;
    std::cout<<"\nAverage = "<<sum/3;
    return 0;
}