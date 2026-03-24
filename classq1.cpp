#include<iostream>
using namespace std;
int main()
{
    string example;
    int vowel_count=0,number_count=0;
    cout<<"Enter your string: ";
    getline(cin,example);
    for(int i=0;i<example.length();i++)
    {
        if(example[i]=='a'||example[i]=='e'||example[i]=='i'||example[i]=='o'||example[i]=='u'||example[i]=='A'||example[i]=='E'||example[i]=='I'||example[i]=='O'||example[i]=='U')
        {
            vowel_count++;
        }
        else if(example[i]>='0' && example[i]<='9')
        {
            number_count++;
        }
    }
    cout<<"The vowel count of the string is: "<<vowel_count<<endl;
    cout<<"The number count of the string is: "<<number_count;
    return 0;
}