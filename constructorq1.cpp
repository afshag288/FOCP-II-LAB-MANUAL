#include<iostream>
using namespace std;

class Student {
    int rollNo;string name; int marks1 ; int marks2; int marks3;

public:
    Student();                          // default constructor
    Student(int, string);               // parameterized constructor
    Student(int, string, int, int, int);
    void displayDetails();
};
Student::Student()
{
    rollNo = 0;
    name = "";
    marks1= 0 ;marks2 = 0; marks3 = 0;

}
Student::Student(int rno,string n)
{
    rollNo = rno;
    name = n;
    marks1= 0 ;marks2 = 0; marks3 = 0;

}
Student::Student(int rno,string n, int m1 ,int m2,int m3)
{
    rollNo = rno;
    name = n;
    marks1= m1 ;marks2 = m2; marks3 = m3;

}

void Student::displayDetails()
{
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks1 << ", "
         << marks2 << ", " << marks3 << endl;
}


int main(){
    Student s1;
    Student s2(101,"xyz"),s3(112,"ABC",223,34,56);
    s1.displayDetails();
    s2.displayDetails();
    s3.displayDetails();
    return 0;
}