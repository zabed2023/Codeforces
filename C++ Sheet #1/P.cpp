#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x>=10)
    {
        x/=10;
    }
    if(x%2==0)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }
    return 0;
}
