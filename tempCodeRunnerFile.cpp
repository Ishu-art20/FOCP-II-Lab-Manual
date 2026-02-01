#include<iostream>
// #include<iomanip>
int main()
{
    int N,n,t=0;
    std:: cout << " ENTER NO. OF INPUTS : ";
    std::cin >> N;
    for(int i=1;i<=N;i++)
    {
       std::cin >> n;
       if(n==0)
       break;
        if(n%2)
        t=t+n;
        else
        continue;
    }
    std:: cout << "SUM is : "<<t;
    return 0;
}