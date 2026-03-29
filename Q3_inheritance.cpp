//
/* Create two classes: Academic with marks, and Sports with score.
 Derive a class Result that displays both academic marks and sports score. 
Show how the derived class accesses members of both base classes.*/
#include<iostream>
using namespace std;

class Academic   //base class
{   protected:
    int marks;
    public:
    Academic(){cout<<"\nDefault Academic";marks=0;}
    Academic(int m){cout<<"\nParameterized Academic";marks=m;}
};

class Sports   //2nd base class
{   protected:
    int score;
    public:
    Sports(){cout<<"\nDefault Sports"; score=0;}
    Sports(int s){cout<<"\nParameterized Sports"; score=s;}
};

class Result:public Academic,public Sports    //derived class
{    public:
    Result() : Academic(), Sports()
    {     cout<<"\n\n--YOUR RESULT--";   }

    Result(int mar,int sco):Academic(mar),Sports(sco)
    {   cout<<"\n\n--YOUR RESULT--";    }

     void display()
    {   cout << "\nMarks = " << marks;
        cout << "\nScore = " << score;   }
};

int main(){
    Result r1; Result r2(23,45);
    cout << "\n\nResult 1:";
    r1.display();
    cout << "\n\nResult 2:";
    r2.display();
    return 0;
}