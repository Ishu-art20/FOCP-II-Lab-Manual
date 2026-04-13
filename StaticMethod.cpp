// Static and non static
#include<iostream>
using namespace std;
class University
{
string rollno;
string name;
int marks;
public:
static string univ_name;
static string section;
static int room_no;
University(string rollno="25CSU000",string name ="Unknown",int marks=0 )
{
    this->rollno = rollno;
    this->name = name; this->marks = marks;  
}
void display_info()
    {
      cout<<"\n Name = "<<name<<"\n Roll no = "<<rollno<<"\n Marks = "<<marks;
    }
static void display_univ(){
        cout<<"\n Univname : "<<univ_name<<"\n Section : "<<section<<"\n room no : "<<room_no;
    }
};
string University::univ_name="NCU";
string University::section="Section B";
int  University::room_no=32;
int main()
{
    University s1,s2("25CSU111","ABC",45);
    s1.display_info();
    s2.display_univ();
    University::display_univ();
    return 0;
}

