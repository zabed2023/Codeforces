#include<iostream>
using namespace std;

int main()
{
    int a,i,n,j;
    char s;
    cin>>s;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        for(j=1;j<=a;j++)
        {
            cout<<s;
        }
        cout<<endl;
    }

    return 0;
}
