#include<iostream>

using namespace std;

int main()
{
    long long int a,b,c;

    cin>>a>>b>>c;

    long long int min=a;
    long long int max=a;

    if(b>max)
    {
        max=b;
    }
    if(b<min)
    {
        min=b;
    }
    if(c>max)
    {
        max=c;
    }
    if(c<min)
    {
        min=c;
    }

    cout<<min<<" "<<max;

    return 0;
}
