// class Candy 
#include<iostream>
#include<iomanip>
using namespace std;
class Candy
{    public:
    string color;
    int points;
    void setCandy(string c,int p);
    void displayCandy();
    void loose_points();
    void gain_points();
    void loose_points(int n);
    void gain_points(int m);
};
void Candy:: setCandy(string c,int p){
         color = c;  points = p; // you cannot ask for color and points here ask it in main()
    }
void Candy:: displayCandy(){
        cout<<"\nColour is "<<color;
        cout<<"\nPoints are "<<points;
    }
void Candy::loose_points()
{ points-=3; }  
void Candy::gain_points()
{ points+=3; }  
void Candy::loose_points(int n)
{ if(n>points)
    points =0;
    else 
    points-=n;
 }  
void Candy::gain_points(int m)
{ points+=m; }  
int main(){
     Candy c1;
     string clr;int pts;
     cout<<"\n Provide color & points : ";
     cin>>clr>>pts;
     c1.setCandy(clr,pts);
     c1.displayCandy();
       c1.loose_points();
       c1.displayCandy();
       c1.gain_points();
       c1.displayCandy();
     c1.loose_points(10);
     c1.displayCandy();
     c1.gain_points(10);
     c1.displayCandy();
}