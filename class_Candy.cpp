// class Candy [important topic]
#include<iostream>
#include<iomanip>
using namespace std;
class Candy
{    public:
    string color;
    int points;
    void setCandy(string c,int p);
    void displayCandy();
};
void Candy:: setCandy(string c,int p){
         color = c;  points = p; // you cannot ask for color and points here ask it in main()
    }
void Candy:: displayCandy(){
        cout<<"\nColour is "<<color;
        cout<<"\nPoints are "<<points;
    }
int main(){
     Candy c1,c2;
     c1.setCandy("Blue",67);
     //c1.setCandy(clr,pts);
     //string clr,int pts;
     //cout<<"\n Provide color & points : ";
     //cin>>clr>>pts;
     c2.setCandy("Pink",34);
     c1.displayCandy();
     c2.displayCandy();
}