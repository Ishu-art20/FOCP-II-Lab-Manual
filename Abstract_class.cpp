// abstract class
#include<iostream>
using namespace std;

class Shape      //abstract class 
 {
    public:
    virtual void Area()=0;  //full virtual functions , abstract methods
  
    virtual void Perimeter()=0;   
    
    virtual void Dimensions()=0;
    

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
    void Dimensions() const    // now can't change this value suppose i try to do side++;
    { cout<<"\n Side =  "<<side; }

};
int main()  {
    square ss(3);
    ss.Area();
    ss.Dimensions();

    return 0;
}