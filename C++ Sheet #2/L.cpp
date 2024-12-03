#include<iostream>
using namespace std;

int main()
{
    int a,b,i,maxN;

    cin>>a>>b;

    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            maxN=i;
        }
    }
    cout<<maxN;

    return 0;
}
