 // swapping two no.s
 #include<iostream>
 int main() {
    int a=1,b=2;
    int temp;
    std::cout<<"Before swapping : a= "<<a<<" & b= "<<b;
    // using temporary variable
    temp = a;
    a = b;
    b = temp;
    std::cout<<"\nAfter swapping : a= "<<a<<" & b= "<<b;
    // arithmetic
    a=1,b=2;
    a = a+b;
    b = a-b;
    a = a-b;
    std::cout<<"\nAfter swapping : a= "<<a<<" & b= "<<b;
    // bitwise XOR
    a=1,b=2;
    a = a^b;
    b = a^b;
    a = a^b;
    std::cout<<"\nAfter swapping : a= "<<a<<" & b= "<<b;
    return 0;
 }