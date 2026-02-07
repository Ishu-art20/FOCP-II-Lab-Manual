//  prime no within range
#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout<<"Enter range : ";
    cin>>n>>m;
    cout<<"Prime numbers within the range are : ";
    for(i=n;i<=m;i++){
        if(i<=1)
        continue;
        for(j=2;j<i;j++){
           if(i%j==0)
            break;
        }
        if(j==i)
         cout<<i<<" ";
    }
    return 0;
}  