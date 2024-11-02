#include<iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int found=0;

    for(i=2;i<=n;i+=2)
    {
        cout<<i<<endl;
        found=1;

    }
    if(!found)
    {
        cout<<"-1";
    }
    return 0;
}

