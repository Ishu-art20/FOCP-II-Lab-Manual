// Multilevel inheritance
#include<iostream>
using namespace std;

class Animal
{   public:
    void eat();
};
class Dog: public Animal
{   public:
    void bark();
};
class puppy: public Dog 
{   public:
    void weep();
};
int main()
{    

   return 0;
}
