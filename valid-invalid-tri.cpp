#include<iostream>
using namespace std;
int main()
{
    int S1,S2,S3,side1,side2,side3;

    cout<<endl<<"Enter 1st side : ";
    cin>>side1;
    cout<<endl<<"Enter 2nd side : ";
    cin>>side2;
    cout<<endl<<"Enter 3rd side : ";    
    cin>>side3;

    if((side1+side2)>side3)
    {
        cout<<endl<<"Valid triangle";
    }
    else
    {
        cout<<endl<<"Invalid Triangle";
    }

    return 0;
}