#include<iostream>
using namespace std;

int main()
{
    char Y;
    cin>>Y;

    if(Y>='0' && Y<='9')
    {
        cout<<"IS DIGIT";
    }
    else if(Y>='A' && Y<='Z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(Y>='a' && Y<='z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }

    return 0;
}
