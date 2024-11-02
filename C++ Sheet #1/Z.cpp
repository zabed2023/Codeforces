#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    long long int a,b,c,d,x,y;
    cin>>a>>b>>c>>d;

    double logA=b*log(a);
    double logB=d*log(c);

    if(logA>logB)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
