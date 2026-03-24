#include<iostream>
using namespace std;
class rectangle
{
    float length;
    float width;
public:
void inputdimensions()
{
    cout<<"\n enter length,width";
    cin>>length>>width;

}
float calculatearea()
{ 
    return(length*width);
}
float calculateperimeter()
   {
    return(2*(length+width));
}

void displayresult()
{
    cout<<"\n length :"<<length<<"\n width :"<<width;
    cout<<"\n area="<<calculatearea();
    cout<<"\n perimeter="<<calculateperimeter();
}
};
int main()
{
    rectangle r1;
    r1.inputdimensions();
    r1.displayresult();
    return 0;
}

