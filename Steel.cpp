#include<iostream>
using namespace std;

int main()
{
    int H,T;
    float C;

    cout<<endl<<"Enter Hardneess : ";
    cin>>H;

    cout<<endl<<"Enter Tension : ";
    cin>>T;

    cout<<endl<<"Enter Carbon : ";
    cin>>C;

    if(H>50 && C<0.7 && T>5600)
    {
        cout<<endl<<"Grade 10 Steel.";
    }
    else if(H>50 && C<0.7 && T<5600)
    {
        cout<<endl<<"Grade 9 Steel.";
    }
    else if(H<50 && C<0.7 && T>5600)
    {
        cout<<endl<<"Grade 8 Steel.";
    }
    else if(H>50 && C>0.7 && T>5600)
    {
        cout<<endl<<"Grade 7 Steel.";
    }
    else if(H>50 && C>0.7 && T<5600)
    {
        cout<<endl<<"Grade 6 Steel.";
    }
    else if(H<50 && C<0.7 && T<5600)
    {

        cout<<endl<<"Grade 6 Steel.";
    }
    else if(H<50 && C>0.7 && T>5600)
    {
        cout<<endl<<"Grade 6 Steel.";
    }
    else if(H<50 && C>0.7 && T<5600)
    {
        cout<<endl<<"Grade 5 Steel.";
    }

    return 0;
}