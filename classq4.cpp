#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    int marks1;
    int marks2;
    int marks3;
    public:

void inputdetails() //setter
{
    cout<<"\n enter rollno,name,marks1,marks2,marks3";
    cin>>rollno>>name>>marks1>>marks2>>marks3;

}
int calculatetotal() //getter
{
    return {marks1+marks2+marks3};
}
void displaydetails() //getter
{
    cout<<"\n name :"<<name<<"\n rollno :"<<rollno;
    cout<<"\n marks1 :"<<marks1<<"\n marks2 :"<<marks2<<"\n marks3 :"<<marks3;
    cout<<"\n total ="<<calculatetotal();
}
};

int main()
{
    student s1;
    s1.inputdetails();
    s1.displaydetails();
    student s2;
    s2.inputdetails();
    s2.displaydetails();
    return 0;
}
