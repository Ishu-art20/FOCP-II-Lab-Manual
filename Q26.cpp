//percentage ques
#include<iostream>
using namespace std;
int main()
{   int i,subjects,marks[100];
    float total=0,percentage;
    cout<<"enter the  subjects marks of 5 students"<<endl;

    for(i=0 ;i<=5; i++)
    {
        cout<<"enter the subjects "<<i+1<<endl;
        cin>>marks[i];
        total=total+ marks[i];
    }
    percentage=(total)/5.0;
    cout<<"the total marks is="<<total<<endl;
    cout<<"perecntage is = "<<percentage<<endl;
    return 0;
}