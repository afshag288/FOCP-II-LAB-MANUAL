#include<iostream>
using namespace std;
class person
{
    string name;int age;
    public:
    void display()
    { cout<<"\n name="<<name<<"\n age="<<age; }

    person() { cout<<"\n person default"; name="";age=18;}
    person (string name,int age)  {
        cout<<"\n person parametarised";
        this->name=name;this->age=age;}

};
class student: public person
{
    string rollno;
    public:
    student()  {
        cout<<"\n student default";
        roll no="25csu111";}
        student(string rno, string nm, int ag):person(nm,ag)
        {
            cout<<"\n student parametarised";
            rollno=rno;
        }

        void display_student()   {
            display();cout<<"\n rollno ="<<rollno;
        }
    

};
int main 
{
student s1("25csu000","ABCD",17),s2;
s1.display_student();
s2.display_student();
//cout<<s1.age;
return 0;
}
