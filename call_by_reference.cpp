// call by value & call by reference
#include<iostream>
using namespace std;

void test(int &x,int y, int* z){
      x+=9, y*=7, *z-=2;
      cout<<x<<" "<<y<<" "<<*z<<endl;
}
int main(){
    int a= 3, b=4, c= 6;
    test(a,b, &c);
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}