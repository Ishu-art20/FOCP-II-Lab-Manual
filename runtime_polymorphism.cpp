// run-time polymorphism
#include<iostream>
using namespace std;

class Shape      
 {
    public:
    virtual void Area()  //
    { cout<<"\n no dimensions, no area "; }
    virtual void Perimeter()   //
    { cout<<"\n no dimensions, no perimeter "; }
    void Dimensions()
    { cout<<"\n nothing to display "; }

    virtual void display() final         
    { cout<<"\n-------We are 2D Shapes-------"; }
};
class square: public Shape
{     public:
    int side;
    square(int s=0) { side = s; }
    void Area()   //over-riding
    { cout<<"\n Area = "<<side*side; }
    void Perimeter()  //over-riding
    { cout<<"\n Perimeter =  "<<4*side; }
    void Dimensions()  //over-riding
    { cout<<"\n Side =  "<<side; }

};
int main()  {
    Shape *s1,s2;
    square ss(3);
    s1=&ss;  //pointing to child class,behave like child square

    s1->Area();
    s1->Perimeter();
    s1->Dimensions();
    s1->display();

    s1=&s2;  //pointing to same class shape object, so behave like shape

    s1->Area();
    s1->Perimeter();
    s1->Dimensions();
    s1->display(); 

    return 0;
}