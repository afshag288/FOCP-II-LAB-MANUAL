#include<iostream>
using namespace std;
int multiply(int a,int b,int c=1)
{
    int ans=a*b*c;
    return ans;
}

int main()
{
    cout<<"\n the product of 2 and 3 is"<<multiply(2,3);
    cout<<"\n the product of 2.3 and 4 is"<<multiply(2,3,4);
    cout<<"\n the product of 2.1 and 3.2 is"<<multiply(2,1,3.2);
    return 0;
}