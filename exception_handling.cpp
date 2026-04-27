// Exception handling
#include<iostream>
#include<exception>
using namespace std;
int main(){
    int a=10, b=5;//b=5;
    try{
        if(b==0) 
        throw "Division by zero";
        throw 12;
        cout<< a/b;
    }
    catch(const char*msg){  cout<<msg; }
    catch(...){  cout<<"\n problem occured";  }   //never put a generic catch(catch(...) before other catch it goes last as all handler)
    cout<<"\n exception handled successfully";
}