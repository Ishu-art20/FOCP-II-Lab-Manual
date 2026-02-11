// prime functions
#include<iostream>
using namespace std;
bool isPrime(int n);
int main()
{
    int n ;
    cout<<"Enter an integer : ";
    cin>>n;
    isPrime(n);
    return 0;
}
bool isPrime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
        cout<<"Not Prime";
        return false;   }
        else{
        cout<<"Prime";
        return true;  }
    }
    
}