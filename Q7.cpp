// max logic
#include<iostream>
using namespace std;
int main()
{
    int players,score,max=0,i,winner;
    cout<<"Enter no. of Players : ";     // suppose three players
    cin>>players;
    for( i=1;i<=players;i++)
    {
        cout<<"Enter score of player"<<i<<" : ";
        cin>>score;
        if(max < score){
        max= score;
        winner =i;
        }
    }
    cout<<"Maximum score is : "<<max;
    cout<<"\nCongratulations! Winner is player no."<<winner;
    return 0;
}
 