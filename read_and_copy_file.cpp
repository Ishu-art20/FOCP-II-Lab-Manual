// read and copy 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("C:/Users/Priya/OneDrive/PRIYA/ISHU/Testing_c++code.txt");
    ofstream fout("C:/Users/Priya/OneDrive/PRIYA/ISHU/Final.txt",ios::out);
    string line;

    //while(fin>>line)
    while(getline(fin,line))
     {fout<<line<<endl;}
    
    fin.close();
    remove("C:/Users/Priya/OneDrive/PRIYA/ISHU/Testing_c++code.txt");
    fout.close();

    cout<<"Copied";
}