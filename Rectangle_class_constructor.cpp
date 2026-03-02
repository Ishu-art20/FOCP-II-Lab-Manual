//class Rectangle
#include<iostream>
#include<string>
using namespace std;
class Rectangle
{    
    int length;
    int width;
    public:
    Rectangle();
    Rectangle(int);   // parameterized constructor
    Rectangle(int ,int);  // parameterized constructor
    int CalculateArea();
    int CalculatePerimeter();
    void display();
};
Rectangle::Rectangle()
{  length=width=0; }
Rectangle::Rectangle(int n)
{  length=width=n; }
Rectangle::Rectangle(int m, int n)
{  length=m ;width=n; }
int Rectangle::CalculateArea()
{ return (length*width); }
int Rectangle::CalculatePerimeter()
{ return 2*(length+width); }
void Rectangle::display()
{   cout<<"\nLength = "<<length;  
    cout<<"\nWidth = "<<width;
    cout<<"\n Area = "<<CalculateArea();  
    cout<<"\n Perimeter = "<<CalculatePerimeter();
}
int main()
{
    Rectangle r1,r2(6),r3(4,7);
    r1.display();
    r2.display();
    r3.display();
}
