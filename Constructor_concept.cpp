// constructor 
#include<iostream>
#include<iomanip>
using namespace std;
class Candy
{    public:
    string color;
    int points;
    void setCandy(string c,int p);
    void displayCandy();
    Candy(); //default
    Candy(string cl,int pt);
};
void Candy:: setCandy(string c,int p){
         color = c;  points = p; // you cannot ask for color and points here ask it in main()
    }
void Candy:: displayCandy(){
        cout<<"\nColour is "<<color;
        cout<<"\nPoints are "<<points;
    }
    Candy::Candy()
    {  color = "Black",points = 0; };
    Candy::Candy(string cl,int pt)   // parameterized constructer
    {
        color =cl; points =pt;
    }
int main(){
     Candy c1,c2,c3("white",10);
     c1.setCandy("RED ", 40);
     c1.displayCandy();
     c2.displayCandy();
     c3.displayCandy();
}