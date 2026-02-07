// Triangle type check
#include<iostream>
using namespace std;
int main(){
    float s1,s2,s3;
    cout<<"Enter Sides of Triangle: ";
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3)
      cout<<"Equilateral Triangle";
    else if(s1==s2 ||s2==s3 ||s1==s3)
      cout<<"Isosceles Triangle";
    else if((s1*s1)==(s2*s2)+(s3*s3) || (s2*s2)==(s1*s1)+(s3*s3) || (s3*s3)==(s2*s2)+(s1*s1))
      cout<<"Right Triangle";
    return 0;
}