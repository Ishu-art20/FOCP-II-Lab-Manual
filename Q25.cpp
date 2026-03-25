// Strong password
#include<iostream>
#include<string>
using namespace std;
int main()
{   string p;
    char c;
    cout<<"Enter your Password : ";
    getline(cin,p);
     int isupper = 0, islower=0 , digit =0, Sc=0;
      for(int i=0; i < p.length(); i++)
    {    c = p[i];
        if(c>= 'A' && c<= 'Z')
        {  isupper = 1;  }
        else if(c>= 'a' && c<= 'z')
        { islower = 1;   }
        else if(c>= '0' && c<= '9')
        {  digit = 1;  }
        else 
        {  Sc = 1;}
    }
    if(isupper && islower && digit && Sc)
    { cout << "Strong Password";  }
    else
    { cout << "Weak Password";  }
    return 0;
}