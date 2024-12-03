#include<iostream>
using namespace std;

int main()
{
    int x,j,i;
    cin>>x;

    for(i=2;i<=x;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}

