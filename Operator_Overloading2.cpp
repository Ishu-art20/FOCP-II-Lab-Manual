//operator overloading part 2
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
int main() {
	Rectangle rect(5,10);
	cout<<"Before increment: ";
    rect.display();

	++rect;
    cout<<"After increment: ";
	rect.display(); 
	return 0;
}