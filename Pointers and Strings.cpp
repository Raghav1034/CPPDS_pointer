/*22070123138
Raghav Sadh
Experiment 11*/
#include<iostream>
using namespace std;
int main()
{
    int i, j, len;
    i=0, len=0;
    char name[15];
    cout<<"Enter a name: ";
    cin>>name;
    cout<<name<<endl;
    while(name[i]!='\0')
    {
        len++;
        i++;
    }
    cout<<"The length of string is: "<<len<<endl;;
    for(i=len-1;i>=0;i--)
    {
        cout<<name[i];
    }
    return 0;
}
