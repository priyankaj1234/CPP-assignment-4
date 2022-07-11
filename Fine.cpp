#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<endl<<"Enter no of days : ";
    cin>>n;

    if(n<=5)
    {
        cout<<endl<<"Fine is 50 Paise.";
    } 
    else if(n>=6 && n<=10)
    {
        cout<<endl<<"Fine is Rs.1";
    } 
    else if(n>10 && n<=30)
    {
        cout<<endl<<"Fine is Rs.10";
    }
    else if(n>30)
    {
        cout<<endl<<"Membership canceled.";
    }

    return 0;
}