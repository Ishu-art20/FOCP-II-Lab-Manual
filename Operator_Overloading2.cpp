// pre/post operator overloading 
#include<iostream>
using namespace std;

class Rectangle {
    private:
	int width, height;
	public:
    Rectangle(int w=0, int h=0) : width(w),height(h) {}
	Rectangle operator++() {
		++width;
		++height;
        return *this;
	}
	Rectangle operator++(int i) {
		Rectangle temp= *this;
		++width;
		++height;
        return temp;
	}
	void display(){
		cout<<"Width = "<<width<<"  Height = "<<height<<endl;
	}
};
//Rectangle operator++(Rectangle obj);  if created outside class
//Rectangle operator++(Rectangle obj,int i);  if created outside class
int main() {
	Rectangle rect(5,10);
	cout<<"Before increment: ";
    rect.display();

	Rectangle r2;
	r2=++rect;
	cout<<"Pre increment: ";
	rect.display();
    r2.display();

    cout<<"Post increment: ";
	rect.display(); 
    r2=rect++;
	r2.display();
	rect.display();
	
	return 0;
}