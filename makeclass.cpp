#include<iostream>
using namespace std;
class car
{
    
    int make_year;
    string color;
    public:
    string brand;
    string car_type;
    void display()
    {   cout<<"\n brand of the car"<<brand;
    cout<<"\n make_year of the car"<<make_year;
    cout<<"\n car type "<<car_type;
}
void car_entry()
{   cout<<"\n enter brand, make, car type, color";    
     cin>>brand>>make_year>>car_type>>color;}
};

int main()
{
    car c1;
    c1.car_entry();
    c1.car_type="hatch break";
    c1.brand="ABC";
    c1.display();
    return 0;
}