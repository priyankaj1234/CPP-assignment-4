#include<iostream>
using namespace std;
int main()
{
    int A1,A2,A3;

    cout<<endl<<"Enter 1st angle : ";
    cin>>A1;
    cout<<"Enter 2nd angle : ";
    cin>>A2;
    cout<<"Enter 3rd angle : ";
    cin>>A3;

    if(A1<90 && A2<90 && A3<90)
    {
        cout<<endl<<"Entered triangle is an ACUTE TRIANGLE";
    }
    if(A1==90 && A2<90 && A3<90)
    {
        cout<<endl<<"Entered triangle is an RIGHT ANGLE TRIANGLE";
    }
    else if(A1<90 && A2==90 && A3<90)
    {
        cout<<endl<<"Entered triangle is an RIGHT ANGLE TRIANGLE";
    }
    else if(A1<90 && A2<90 && A3==90)
    {
        cout<<endl<<"Entered triangle is an RIGHT ANGLE TRIANGLE";
    }
    else if(A1>90 && A2<90 && A3<90)
    {
        cout<<endl<<"Entered triangle is an OBSOLUTE TRIANGLE";
    }
    else if(A1<90 && A2>90 && A3<90)
    {
        cout<<endl<<"Entered triangle is an OBSOLUTE TRIANGLE";
    }
    else if(A1<90 && A2<90 && A3>90)
    {
        cout<<endl<<"Entered triangle is an OBSOLUTE TRIANGLE";
    }
    
    return 0;
}