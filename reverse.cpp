#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,rem;
    cout<<endl<<"Enter a number : ";
    cin>>num;

    while(num>0)
    {
        rem=num%10;
        rev=rem+(rev*10);
        num=num/10;
    }
    cout<<endl<<"Reverse : "<<rev;
    return 0;
}