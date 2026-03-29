//Alphabets in pyramid form
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5; char c;
    for(i=1;i<=n;i++)
    {    c ='A';
        for(j=1;j<=i;j++)
        {
            cout<<c;
            c++;
        }
        cout<<'\n';
    }
    return 0;
}