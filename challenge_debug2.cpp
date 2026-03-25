// challenge debug
#include<iostream>
using namespace std;
void counter() {
    static int count =0;     //use of static here - debug
    count++;
    cout<<count<<" ";
}
int main(){
    for(int i=0;i<4;i++)
    counter();
}