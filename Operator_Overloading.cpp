//operator overloading
#include<iostream>
using namespace std;

class Rectangle {
    private:
	int width, length;
	public:
    Rectangle(int w=0, int l=0) : width(w),length(l) {}
	void display(){
		cout<<"Width = "<<width<<"  Length = "<<length<<endl;
	}
	Rectangle operator-(Rectangle obj2)
    {  Rectangle temp;
	   temp.width=width-obj2.width;
	   temp.length=length-obj2.length;
       return temp;
    }
	Rectangle operator+(int val)
    {  Rectangle temp;
	   temp.width=width+val;
	   temp.length=length+val;
       return temp;
    }
    friend Rectangle operator+(int val,Rectangle obj);
};
Rectangle operator+(int val,Rectangle obj)
{   Rectangle temp;
	temp.width=val+obj.width;
	temp.length=val+obj.length;
    return temp;
}
int main(){
	Rectangle r1(5,10),r2(67,90);
	r1.display();
    Rectangle  r3 = r1.operator-(8) ; // r1-r2
	r2.display();
	r3.display();
	r3 = 9 + r1;
	r3.display();
	return 0;
}