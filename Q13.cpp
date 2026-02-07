// quadratic roots 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
    float D,a,b,c,r1,r2;
    cout<<"Enter a, b, c:";
    cin>>a>>b>>c;
    D=(b*b)-(4*a*c);
    if(D>0) {
        r1=(-b+sqrt(D)/(2*a));
        r2=(-b-sqrt(D)/(2*a));
        cout<<"\nRoots are real and unequal";
        cout<<"\nRoot1 = "<<r1;
        cout<<"\nRoot2 = "<<r2;
    }
    else if(D==0){
        r1=-b/(2*a);
        cout<<"\nRoots are real and equal";
        cout<<"\nRoot1 = "<<r1;
    }
    else 
    cout<<"\nRoots are Complex";
    return 0;
}