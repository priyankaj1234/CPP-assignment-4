#include<iostream>
using namespace std;
int main()
{
    int a,s,r;

    cout<<endl<<"Enter ange of Ram : ";
    cin>>r;
    cout<<endl<<"Enter age of Shyam : ";
    cin>>s;
    cout<<endl<<"Enter age of Ajay : ";
    cin>>a;

    if (r>s && r>a)
    {
        if(s>a)
        cout<<endl<<"Ajay is youngest.";
        else
        cout<<endl<<"Shyam is youngest.";
    }
    else if(s>a && s>r)
    {
        if(a>r)
        cout<<endl<<"Ram is youngest.";
        else
        cout<<endl<<"Ajay is youngest.";
    }
    else if(a>s && a>r)
    {
        if(s>r)
        cout<<endl<<"Ram is youngest.";
        else 
        cout<<endl<<"Shyam is youngest.";
    }
    
    return 0;
    
}