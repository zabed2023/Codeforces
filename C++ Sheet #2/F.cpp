#include<iostream>
using namespace std;

int main()
{
    int n,i,r;
    cin>>n;

    for(i=1;i<=12;i++)
    {
        r=n*i;
        cout<<n<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<r<<endl;
    }

    return 0;
}
