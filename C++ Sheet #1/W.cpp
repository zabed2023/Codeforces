#include<iostream>
using namespace std;

int main()
{
    long long int a,b,r,x;
    char s,e;

    cin>>a>>s>>b>>e>>r;

    if(s=='+')
    {
        x=a+b;
        if(x==r)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<x;
        }
    }

    if(s=='-')
    {
        x=a-b;
        if(x==r)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<x;
        }
    }
    if(s=='*')
    {
        x=a*b;
        if(x==r)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<x;
        }
    }



    return 0;
}
