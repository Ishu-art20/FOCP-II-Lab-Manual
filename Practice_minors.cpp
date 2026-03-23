// Minor Practice
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
// function overloading concept
double sum(double a,double b){
    return a+b;
}
int main(){
    cout<<sum(3,4)<<endl;
    cout<<sum(3.6,4.2)<<endl;
    //pointer concept
    int a =80;
    int *p=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    // pointer in arrays
    int arr[]={10,20,30,40,50};
    int* s=arr;
    cout<<*(s+1)<<endl;
    cout<<*s++<<endl;
    cout<<*++s<<endl;
    cout<<*--s<<endl;
    return 0;
}