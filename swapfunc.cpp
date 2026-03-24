#include<iostream>
using namespace std;
void swap(int &m,int &n)
{
    m=m+n;
    n=m-n;
    m=m-n;
    
}
void swap(float &m, float &n)
{
    n=m+n;
    n=m-n;
    m=m-n;
}
int main()
{
    int a=23, b=25;
    cout<<"\n before swap a= "<<a<<" b= "<<b;
    swap(a,b);
    cout<<"\n after swap a="<<a<<" b= "<<b;
    
    float c=23.5, d=25.5;
    cout<<"\n before swap a= "<<c<<" b="<<d;
    swap(c,d);
    cout<<"\n after swap as= "<<c<<" b="<<d;
    return 0;
}
    
