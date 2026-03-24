//question 27//
#include<iostream>
using namespace std;
int main()
{
    float item_price[10],max=0;
    int i;
    cout<<"enter the item price"<<endl;
    for(i=0;i<=9;i++)
    {
        cin>>item_price[i];
    }
    for(i=0;i<=9;i++)
    {
        if(max<item_price[i])
        {
            max=item_price[i];
        }
    }
    cout<<"Max_value="<<max<<endl;
}
