// challenge debug
#include<iostream>
using namespace std; 
int compute(int a, double b) { // we could have also removed double with int
    return a+b;
}
double compute(double a, int b) {
    return a+b;
}
int main(){
    cout<<compute(10, 10.0);
}