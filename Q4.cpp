// 20% discount
#include<iostream>
#include<iomanip>
int main()
{
    int i,q;
    float u,d,t,T;
    std::cout<<"Enter quantity and unit price : ";
    std::cin>>q>>u;
    t=q*u;
    std::cout<<"Your Total : "<<t;
    d=(20/100)*t;
    T=t-d;
    std::cout<<"Bill : "<<T;
    return 0;
}