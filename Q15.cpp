// max logic
#include<iostream>
using namespace std;
int main(){
    int n, k[n],max=0;
    cout<<"Enter no of entries : ";
    cin>>n;
    cout<<"Enter numbers : ";
    for(int i=1;i<=n;i++){
        cin>>k[i];
        if(max<k[i])
        max = k[i];
    }     
    cout<<"Max Entry was of : "<<max;
    return 0;
}  