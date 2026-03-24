#include<iostream>
using namespace std;
int main()
{
    int element[5],i;
    int sum_even=0,sum_odd=0;
    cout<<"enter 5 numbers"<<endl;
    for(i=0;i<=4;i++)
    {
        cin>>element[i];
    }
    for(i=0;i<=4;i++)
    { 
        if(element[i]%2==0)
        {
            sum_even=sum_even+element[i];
        }
        else
        sum_odd=sum_odd+element[i];
}
cout<<"sum of even_no.="<<sum_even<<endl;
cout<<"sum of odd_no.="<<sum_odd<<endl;
}