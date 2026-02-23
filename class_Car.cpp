//  class Car
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Car
{  public:
   string brand;
   float price;
   int make;
   string color;
   void input_details()
   {
      cout<<"Enter Brand,Price,Make,Color : ";
      cin>>brand>>price>>make>>color;
   }
   void display_details()
   {
      cout<<"\nBrand : "<<brand<<"\nPrice : "<<price<<"\nMake : "<<make<<"\nColor : "<<color;
   }
};

int main() {
    Car c1;
    c1.brand;
    c1.price;
    c1.input_details();
    c1.display_details();
}