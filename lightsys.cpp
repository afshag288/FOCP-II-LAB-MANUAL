#include<iostream>
using namespace std;
class smartlight 
{
    string brand;
    int brightness;
    bool isOn;
    public:
    smartlight()
    {
    
        brand="unknown";
        brightness=50;
        isOn=false;
    }
    
smartlight(string b, int br, bool status){
        brand =b;
        brightness=br;
        isOn = status;
    }
    void turnOn() {
        isOn=true;
        cout<<brand<<"light turned on.\n";
    }
    void turnOff() {
        isOn=false;
        cout<<brand<<"light is turned off,\n";
    }
    void increasebrightness() {
        if (brightness < 100){
            brightness +=10;
            if (brightness > 100)
            brightness = 100;
        }
        cout << "brightness increased to"<<brightness<<endl;
    }
    void decreasebrightness() {
        if (brightness > 0) {
            brightness -=10;
            if (brightness < 0)
            brightness = 0;
        }
        cout << "brightness decrease to" << brightness << endl;
    }
    void displaystatus() {
        cout << "\nbrand:"<<brand;
        cout << "\nbrightness:"<<brightness;
        cout<<"\nstatus:"<<(isOn? "on" : "off")<<endl;
    }
    ~smartlight() {
        cout << brand <<" object destroyed.\n";
    }
};

int main() {
    smartlight light1;
    smartlight light2;
    light1.displaystatus();
    light1.turnOn();
    light1.increasebrightness();
    light1.displaystatus();
    
    light2.displaystatus();
    light2.decreasebrightness();
    light2.turnOff();
    light2.displaystatus();
    return 0;


}