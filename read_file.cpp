// read file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("C:/Users/Priya/OneDrive/PRIYA/ISHU/Testing_c++code.txt");
    ofstream fout("C:/Users/Priya/OneDrive/PRIYA/ISHU/Final.txt",ios::out);
    string line;

   // if(!fin)   // if(!fin.is_open())
   // {
       // cout<<"\n issue with file,can't read";
       // return 0;
   // }
    //while(fin>>line)
    while(getline(fin,line))
     {fout<<line<<endl;}
    
    fin.close();
    fout.close();
    cout<<"Copied";
}