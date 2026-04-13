// Smart constructor
#include<iostream>
using namespace std;
class Box {
    private:
       double length;
       double breadth;
       double height;
       static int count;
    public:
    Box(double l = 1, double b = 1, double h = 1)
    {   length = l ;
        breadth = b;
        height = h;
    } 
    void display(){ cout<<"\nLength = "<<length; 
        cout<<"\nBreadth = "<<breadth;
        cout<<"\nHeight = "<<height;
    }
};
int Box ::count;
int main()
{
    Box b[5]={Box(23,67,34),Box(25,43,17)};
    Box *obj_arr=new Box[5]{Box(45,45,45),Box(56,34,34),Box(13,3,7)};
    for(int i=0;i<5;i++){
        cout<<"\n*****"<<i<<"th object called";
        b[i].display();
    }
    return 0;
}
