#include<iostream>
using namespace std;

int main()
{
    int a,b,res;

    char s;

    cin>>a>>s>>b;

    if(s=='+')
    {
        res=a+b;
        cout<<res;
    }
    if(s=='-')
    {
        res=a-b;
        cout<<res;
    }
    if(s=='*')
    {
        res=a*b;
        cout<<res;
    }
    if(s=='/')
    {
        res=a/b;
        cout<<res;
    }

    return 0;
}
