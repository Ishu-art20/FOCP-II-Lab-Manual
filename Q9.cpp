// text editor
#include<iostream>
using namespace std;
int main()
{
    int i;
    char l;
    cout<<"Enter letter : ";
    cin>>l;
    if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u' || l=='A' || l=='E' || l=='I' || l=='O' || l=='U')
    cout<<"It's a Vowel";
    else if(l>='0' && l<='9')
    cout<<"It's a Number";
    else
    cout<<"It's a Consonant";
    return 0;
}
 