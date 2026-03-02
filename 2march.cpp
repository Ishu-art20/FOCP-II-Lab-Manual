//
#include<iostream>
#include<iomanip>
using namespace std;
class SmartLight
{  string brand;
    int brightness;
    bool isOn;
    public:
    //void turnOn();
    //void turnOff();
    //void increaseBrightness();
    //void decreaseBrightness();
    //void displayStatus();
     SmartLight() {
        brand="    ";
        brightness = 79;
        isOn = true;
        cout<<"Default Constructor Called";
     }
     SmartLight(string b, int bright , bool status) {
        brand= b;
        brightness = bright;
        isOn = true;
        cout<<"\nParameterized Constructor Called";
     }
     void turnOff(){
        isOn = false;
        cout<< brand <<"\nLight is turned OFF";
     }
     void turnOn(){
        isOn = true;
        cout<< brand <<"\nLight is turned ON";
     }
     void increaseBrightness(){
        if(brightness<100){
            brightness+=10;
            if(brightness>100)
            brightness=100;
        }
        cout<<"\nBrightness Increased to "<< brightness;
     }
       void decreaseBrightness(){
        if(brightness>0) {         
        brightness-=10;
            if(brightness<0)
            brightness=0;
        }
        cout<<"\nBrightness Decreased to "<< brightness;
     }
     void displayStatus(){
        cout<<"\nBrand = "<<brand<<endl;
        cout<<"Brightness = "<<brightness<<endl;
        cout<<"Status = "<<(isOn?"ON":"OFF")<<endl;
     }

};

int main(){
    SmartLight l1;
    SmartLight l2("Philips",70,true);
    l1.displayStatus();
    l1.turnOn();
    l1.increaseBrightness();
    l1.displayStatus();
    l2.displayStatus();
    l2.turnOn();
    l2.decreaseBrightness();
    l2.displayStatus();
    return 0;
}