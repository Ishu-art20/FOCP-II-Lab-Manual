// string palindrome flag method
//Another method without flag : with the help of i and j if i>=j -> palindrome
#include<iostream>
using namespace std;
int main()
{    int i,j;
    string S;
    cin>>S;
    int flag=0;
    j=S.length()-1;
    for(i=0;i<j;i++,j--)            
    { 
        
        if(S[i]!=S[j])
        {   flag=1;               //std::cout<<"Not a palindrome";
            break;                 // return 0; concept
        }
    }
    if(flag==0)
    cout<<"It's a palindrome";
    else
    cout<<"Not a palindrome";
    return 0;
}
