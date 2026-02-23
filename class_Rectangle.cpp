// class Rectangle
#include<iostream>
#include<string>
using namespace std;
class Rectangle
{    public:
    float length;
    float width;
    void inputDimensions()
    {
        cout<<"Enter length, Width : ";
        cin>>length>>width;
    }
    float calculateArea()
    {
        return length*width;
    }
    float calculatePerimeter()
    {
        return 2*(length+width);
    }
    void displayResult()
    {   cout<<"   Rectangle";
        cout<<"\nLength and Width : "<<length<<"  "<<width;
        cout<<"\nArea : "<< length*width<<"\nPerimeter : "<<2*(length+width);
    }
};
int main() {
    Rectangle r1;
    r1.inputDimensions();
    r1.calculateArea();
    r1.calculatePerimeter();
    r1.displayResult();
    return 0;
}