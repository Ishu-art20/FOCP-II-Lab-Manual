//
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // by default ios::out
    ofstream fout("C:/Users/Priya/OneDrive/PRIYA/ISHU/Testing_c++code.txt",ios::app);
    //fstream fout("richa.txt",ios::out)

    fout<<"\n 1234567\n sfdfdv nmgjfvc senc\n";
    fout<<"sdh gd weer yhbf ";

    fout.close();

    cout<<"Data written successfully";

}