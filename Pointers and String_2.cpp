/*22070123138
Raghav Sadh
Experiment 11*/
#include<iostream>
using namespace std;
int main()
{
    int i, len=0;
    float fl;
    int *int_ptr;
    float *flt_ptr;
    char *chr_ptr="sit";
    i=5;
    fl=3.4;
    int_ptr = &i;
    flt_ptr = &fl;
    cout<<"*int_ptr = "<<*int_ptr<<endl;
    cout<<"&i= "<<&i<<endl;
    cout<<int_ptr<<endl;
    cout<<flt_ptr;
    while(*chr_ptr++)
    {
        len++;
    }
    return 0;
}
