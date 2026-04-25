// 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("C:/Users/Priya/OneDrive/PRIYA/ISHU/Testing_c++code.txt");
    string line;
     //while(fin>>line)
     while(getline(fin,line))
     {
        cout<<line<<endl;
     }
     fin.close();
}