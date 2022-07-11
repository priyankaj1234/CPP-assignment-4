#include<iostream>
using namespace std;

int main()
{
    float CP,SP,Profit,Loss,Profit per,Loss per;

    cout<<endl<<"Enter CP";
    cin>>CP;

    cout<<endl<<"Enter SP";
    cin>>SP;
   
    if(SP>CP)
    {
        Profit = SP-CP;
        Profit per = Profit/CP*100;
        cout<<"Profit : "<<Profit;
        cout<<"Profit  per : "<<Profit per;
    }
    else if(CP>SP)
    {
        Loss = CP-SP;
        Lopss per = Loss/CP*100;
        cout<<"Loss : "<<Loss;
        cout<<"Loss per: "<<Loss per;
    }

    return 0;
}