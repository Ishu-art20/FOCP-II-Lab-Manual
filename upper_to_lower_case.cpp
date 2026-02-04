// upper to lower case 
#include<iostream>
   using namespace std;
    int main(){
        string s,s1="";
        getline(cin,s);
        cout<<s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<= 'Z')
             s1 += char(s[i] + 32);
            else if( (s[i]>='a' && s[i]<= 'z' )|| (s[i]>= '0' && s[i]<= '9'))
            s1 += s[i];
            else
            continue;
        }
        cout<<s1;

        return 0;
    } 