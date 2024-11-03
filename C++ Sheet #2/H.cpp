#include<iostream>
using namespace std;

int main()
{
    long long int x,i,prime;
    cin>>x;

    prime=0;

    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            prime++;
    }

    if(prime==2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
