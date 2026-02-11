// swap functions
#include<iostream>
using namespace std;
void swapByValue(int a,int b);
void swapByReference(int &a,int &b);
int main(){
    int a,b;
    cout<<"Enter two integers : "
    cin>>a>>b;
    swapByValue(a,b);
    swapByReference(a,b);
}
void swapByValue(int a,int b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
void swapByReference(int &a,int &b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}
