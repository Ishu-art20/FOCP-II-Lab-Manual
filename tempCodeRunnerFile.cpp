// armstrong and perfect Number
#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
    int no,count=0,copy;
    int rem,rev=0,arm=0,sum=0;
    cout<<"Enter number: ";
    cin>>no;
    copy= no;
    count=0;
    while(no>0)
    {   count++;
        no=no/10;    
    }
    no=copy;
    while(no>0)
    {
        rem=no%10;
        arm+=static_cast<int>(pow(rem,count));
        no=no/10;
    }
    if(copy==arm)
       cout<<"\nIt's an Armstrong Number"; 
    else
       cout<<"\nIt's not an Armstrong Number"; 
    no=copy;
    for(int i=1;i<no;i++){
        if(no%i==0)
        sum+=i;
    }
    if(sum==no)
      cout<<"\nIt's a Perfect Number";
    else 
      cout<<"\nIt's not a Perfect Number";
    return 0;
} 