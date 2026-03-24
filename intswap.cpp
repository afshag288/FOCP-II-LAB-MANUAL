#include<iostream>
using namespace std;

void swap(int &a, int &b);

int main(){
    int a = 10, b = 20;
    swap(a,b);
    }

    void swap(int &a, int &b){
        int c;
        c=a;
        a=b;
        b=c;

        cout<<"after swap a is "<<a<<" and b is "<<b;
    }