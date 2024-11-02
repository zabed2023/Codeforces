#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c;

    cin>>a>>b>>c;

    long long int maxV,minV,midV;

    if(a<=b && a<=c)
    {
        minV=a;
        if(b>=c)
        {
            midV=c;
            maxV=b;

        }
        else
        {
            midV=b;
            maxV=c;
        }
    }

    else if(b<=a && b<=c)
    {
        minV=b;
        if(a>=c)
        {
            midV=c;
            maxV=a;

        }
        else
        {
            midV=a;
            maxV=c;
        }

    }
    else
        {
            minV=c;
            if(a>=b)
            {
                midV=b;
                maxV=a;

            }
            else
            {
                midV=a;
                maxV=b;
            }
        }

    cout<<minV<<endl<<midV<<endl<<maxV<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}
