#include<iostream>
using namespace std;
int mian()
{
    char ch;

    cout<<endl<<"Enter any character : ";
    cin>>ch;
if(ch>65 && ch<90)
    {
        cout<<endl<<"Enter Character is Capital Letter. ";
    }
else if(ch>97 && ch<122)
    {
        cout<<endl<<"Enter Character is Small Letter. ";
    }
else if(ch>48 && ch<57)
    {
        cout<<endl<<"Enter Character is a Number. ";
    }
else if(ch>0 && ch<47 && ch>58 && ch>64 && ch>91 && ch<96 && ch>123 && ch<127)
    {
        cout<<endl<<"Enter Character is Special Char. ";
    }
        return 0;

}
