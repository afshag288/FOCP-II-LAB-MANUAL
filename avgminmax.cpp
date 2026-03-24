#include<iostream>
using namespace std;
void computePerformance(int m[],int n)
{
    int i;
    int min=m[0],max=m[0],sum=0;
    float avg=0;
    for(int i=1;i<n;i++)
    {
        if(m[i]>max){
            max=m[i];
        }
        if(min>m[i]){
            min=m[i];
        }
        sum=sum+m[i];
    }
    avg=(float)sum/n;
    cout<<max;
    cout<<"\n"<<min;
    cout<<"\n"<<avg;
}
int main(){
    int marks[10]={22,33,44,55,66,77,88,99,12,13};
    computePerformance(marks,10);

return 0;
}
