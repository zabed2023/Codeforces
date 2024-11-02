#include<iostream>
using namespace std;

int main()
{
    int a,n,i;
    cin>>n;

    int ev=0;
    int odd=0;
    int pos=0;
    int neg=0;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            ev++;
        }
        if(a%2!=0)
        {
            odd++;
        }
        if(a>0)
        {
            pos++;
        }
        if(a<0)
        {
            neg++;
        }
    }

    cout<<"Even:"<<ev<<endl;
    cout<<"Odd:"<<odd<<endl;
    cout<<"Positive:"<<pos<<endl;
    cout<<"Negative:"<<neg<<endl;

    return 0;
}
