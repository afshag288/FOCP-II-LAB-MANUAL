//question 26//
#include<iostream>
using namespace std;
int main()
{
    float marks[5],total=0,percent;
    int i;
    cout<<"enter the marks";
    for(i=0;i<=4;i++)
    {
    cin>>marks[i];
    total=total+marks[i];
    }
   cout<<"TOTAL="<<total<<endl;
   percent=(total/500)*100;
   cout<<"percentage="<<percent<<endl;

}