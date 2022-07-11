#include<iostream>
using namespace std;
int main()
{
    int S1,S2,S3;

    cout<<endl<<"Enter 1st side : ";
    cin>>S1;
    cout<<"Enter 2nd side : ";
    cin>>S2;
    cout<<"Enter 3rd side : ";
    cin>>S3;

    if(S1==S2 && S1==S3)
    {
        cout<<endl<<"Entered triangle is an EQUILATERAL TRIANGLE";
    }
    if(S1==S2 && S1!=S3)
    {
        cout<<endl<<"Entered triangle is an ISOCELES TRIANGLE";
    }
    if(S1!=S2 && S1!=S3 && S2!=S3)
    {
        cout<<endl<<"Entered triangle is a SCALENE TRIANGLE";
    }

    return 0;
}