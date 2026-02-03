// q27 maximum price
#include<iostream>
using namespace std;
int main()
{
   int no[10],max=0;
   for(int i=0;i<10;i++)
   {
      cin>>no[i];
      if(max<no[i])
      max=no[i];
   }
   cout<<"max price is : "<<max;
   return 0;
}