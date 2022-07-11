#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<endl<<"Enter any number : ";
    cin>>n;

    if(n<0)
    {
        n= (-1)*n;
        cout<<endl<<"Absolute value is : "<<n;
    }
    else 
    {
        n=n;
        cout<<endl<<"Absolute value is : "<<n;
    }
    return 0;
}