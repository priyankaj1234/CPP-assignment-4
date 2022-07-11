#include<iostream>
using namespace std;
int main()
{
    float T;

    cout<<endl<<"Enter time taken by a worker to complete a task : ";
    cin>>T;

    if(T<=3)
    {
        cout<<endl<<"The worker is highly efficient.";
    }
    else if(T>3 && T<4)
    {
        cout<<endl<<"Worker needs to improve his speed.";
    }
    else if(T>4 && T<5)
    {
        cout<<endl<<"Worker needs a training to improve his speed.";
    }
    else
    {
        cout<<endl<<"Worker needs to leave the complany.";
    }

    return 0;
}