// string handling
#include<iostream>
#include<iomanip>
int main()
{    int a;
    std::cin>>a;
    std:: string s;
    std::cin.ignore();
    getline(std::cin,s);
    std::cout<<a;
    std::cout<<"\ns="<<s;
    std::cout<<"\na= "<<std::setw(15)<<a;
    std::cout<<"\na= "<<std::left<<a;
    return 0;
}
