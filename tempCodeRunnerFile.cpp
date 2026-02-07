//
#include<iostream>
using namespace std;
int main(){
    int x,rev=0; 
       int rem;
       cout<<"Enter a number: ";
       cin>>x;
       int copy = x;
    while(x>0){ 
        
        rem = x%10;
        rev = rev*10 + rem;
        x = x/10;
    }
     if(rev==copy)
        cout<<"\nIt's a Palindrome" ;
        else
        cout<<"\nIt's not a Palindrome"; 
    return 0;
}  