#include<iostream>
using namespace std;

int main()
{
    int a,i,j;

    cin>>a;

    for(i=a;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

