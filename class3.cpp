#include<iostream>
using namespace std;
void welcome(void);
void welcome(string);
int sum(int,int);
float sum(float,float);
double sum(double,double);
int main()
{
    string user_name;
    cout<<"\n enter username:";
    getline(cin,user_name);
    welcome();
    welcome(user_name);

    int a,b;
    cout<<"\n enter two integers:";
    cin>>a>>b;
    sum(a,b);

    float x,y;
    cout<<"\n enter two float numbers:";
    cin>>x>>y;
    sum(x,y);

    double m,n;
    cout<<"\n enter two float numbers:";
    cin>>m>>n;
    sum(m,n);
    
    cout<<"\n sum: "<<sum(123,456,12.567);

    return 0;


}
void welcome()
{cout"\n welcome user";}

