// over-riding
#include<iostream>
using namespace std;

class Shape      //class Shape final : to restrict inheritance
 {
    public:
    void Area() 
    { cout<<"\n no dimensions, no area "; }
    void Perimeter()
    { cout<<"\n no dimensions, no perimeter "; }
    void Dimensions()
    { cout<<"\n nothing to display "; }

    virtual void display() final         // to restrict overriding of any method
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
   // void display() {cout<<"breaking rule "; }  : now cannot override this method
};
int main()  {
    Shape s1;
    square ss(3);
    ss.Area();ss.Perimeter(); ss.Dimensions();
    ss.Shape::Area();
    ss.display();

    return 0;
}