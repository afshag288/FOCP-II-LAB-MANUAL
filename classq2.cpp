#include<iostream>
using namespace std;
void welcome(void);
void welcome(string);
int sum(int,int);
int main()
{
    string user_name;
    cout<<"\n enter user name";
    getline(cin,user_name);
    welcome();
    welcome(user_name);

    int a,b;
    cout<<"\n enter two numbers:";
    cin>>a>>b;
    sum(a,b);
    return 0;
}


void welcome()
{cout<<"\n welcome user";}

void welcome(string name)
{cout<<"\n welcome"<<name;}

int sum(int a, int b)
{int sum=a+b;
cout<<sum;}
