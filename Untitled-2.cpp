// challenge
#include<iostream>
using namespace std;
void transform(int &x) {
    x =x*x;
}
int main(){
    int num = 5;
    transform(num);
    cout<< num;
    
}