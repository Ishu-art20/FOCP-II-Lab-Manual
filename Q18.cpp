// palindrome ID check
#include<iostream>
using namespace std;
int main(){
      int i,j;
    string ID;
    cout<<"Enter your ID : ";
    cin>>ID;
    int flag=0;
    j=ID.length()-1;
    for(i=0;i<j;i++,j--)            
    { 
        
        if(ID[i]!=ID[j])
        {   flag=1;               
            break;                
        }
    }
    if(flag==0)
    cout<<"It's a palindrome";
    else
    cout<<"Not a palindrome";
    return 0;
}