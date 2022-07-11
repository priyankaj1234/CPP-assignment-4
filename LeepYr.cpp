#include<iostream>
using namespace std;

int main()
{
    int Year;

    cout<<endl<<"Enter any year : ";
    cin>>Year;

    if(Year%4==0)
    {
        if(Year%100==0)
        {
            if(Year%400==0)
            {
                cout<<"Entered Year is a Leep Year";
            }
            else
            cout<<"Entered Year is not a Leep year";
        }
        else
        cout<<"Entered Year is a Leep year";
    }
    else
    cout<<"Entered Year is not a Leep year";

    return 0;
}