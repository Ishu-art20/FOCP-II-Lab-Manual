// try catch 
#include<iostream>
#include<exception>
using namespace std;
void checkAge(int age){
    if(age<18)  throw "Underage";
}
int main(){
    try{
        checkAge(16);
    }
    catch(const char*msg)
    {cout<<msg;   }
}