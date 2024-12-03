#include<iostream>
using namespace std;

int main()
{
    int a,b,digit,temp,i,count,c=0;

    cin>>a>>b;

    for(i=a;i<=b;i++)
    {
        temp=i;
        while(temp!=0)
        {
            count=0;
            digit=temp%10;
            temp=temp/10;
            if(digit!=4 && digit!=7)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            cout<<i<<" ";
            c++;
        }

    }
    if(c==0)
    {
        cout<<"-1";
    }

    return 0;
}
