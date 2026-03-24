/*Question of the Day!!
Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
Create a class Candy with the following attributes:
•	string color (stores the color of the candy)
•	int points (stores the points awarded)
The class should have the following member functions:
•	setCandy(string c, int p): Sets the color and points of the candy.
•	displayCandy(): Displays the color and points of the candy.
In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy().*/



/*Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
Create a class Candy with the following attributes:
•	string color (stores the color of the candy)
•	int points (stores the points awarded)
The class should have the following member functions:
•	setCandy(string c, int p): Sets the color and points of the candy.
•	displayCandy(): Displays the color and points of the candy.
In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy().*/

#include<iostream>
using namespace std;

class Candy
{
    string color;
    int points;

public:
    void setCandy(string c, int p);
    void displayCandy();
    void loose_point(int p);
    void gain_point(int p);
};

void Candy::setCandy(string c, int p){
    color = c;
    points = p;
}

void Candy::displayCandy(){
    cout << "Color of candy: " << color << endl;
    cout << "Your points are: " << points << endl;
}
void Candy::loose_point(int p)
{
    points=points-p;
    cout<<"points after losing:"<<points<<endl;
}
void Candy::gain_point(int p)
{
    points=points+p;
    cout<<"points after gaining:"<<points<<endl;
}


int main(){
    Candy c1, c2;

    c1.setCandy("pink", 100);
    c1.displayCandy();
    c1.loose_point(20);
    c1.gain_point(20);

    return 0;
}