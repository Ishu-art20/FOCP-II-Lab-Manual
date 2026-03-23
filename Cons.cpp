//
#include<iostream>
using namespace std;
class R
{
    int x;
    int y;
    public:
    R();
    R(int);
    R(int ,int);
    ~R();
    void display();
};
R::R():x(0),y(0){};
R::R():x(67),y(67){};
R::R():x(54),y(12){};
R::display()
{ }
{
    cout<<"\nX = "<<x;
    cout<<"\nY = "<<y;
}
int main()
{
    R r1,r2(45),r3(34,67);
}