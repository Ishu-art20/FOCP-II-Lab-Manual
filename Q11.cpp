// discount application
#include<iostream>
using namespace std;
int main(){
    int items;
    float price,total,discount;
    cout<<"Enter Quantity of items : ";
    cin>>items;
    cout<<"Enter price of one item : ";
    cin>>price;
    total = price*items;
    if (items>1000)
    {
        cout<<"->10% Discount is applicable\n";
        discount=(0.1*total);
        cout<<"\nYour total bill is : "<<(total-discount);
    }
    else
        cout<<"\nYour total bill is : "<<total;
    return 0;
}