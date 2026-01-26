// area of circle
#include<iostream>

int main()
{
    int r;
    float area;
    std::cout<<"Enter radius : ";
    std::cin>>r;
    std::cout<<"Radius: "<<r;
    area=3.14*r*r;
    std::cout<<"\nArea of circle = "<<area;
    return 0;
}