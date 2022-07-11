#include<iostream>
using namespace std;

int main()
{
    float CP,SP,Profit,Loss,Profitp,Lossp;

    cout<<endl<<"Enter CP : ";
    cin>>CP;
    cout<<endl<<"Enter SP : ";
    cin>>SP;
   
    if(SP>CP)
    {
        Profit = SP-CP;
        Profitp= Profit/CP*100;
        cout<<endl<<"Profit : "<<Profit;
        cout<<endl<<"Profit  per : "<<Profitp<< "%";
    }
    else if(CP>SP)
    {
        Loss = CP-SP;
        Lossp = Loss/CP*100;
        cout<<endl<<"Loss : "<<Loss;
        cout<<endl<<"Loss per: "<<Lossp<<"%";
    }
    else
        cout<<endl<< "No profit or loass";
   return 0;
}