#include<iostream>

using namespace std;

int main()
{
    int a,n,i,maxv;

    cin>>n;

    maxv=0;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a>maxv)
            maxv=a;
    }

    cout<<maxv;
    return 0;
}
