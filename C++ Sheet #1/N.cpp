#include<iostream>

using namespace std;

int main()
{
    char x;

    cin>>x;

    if(x>='A' && x<='Z')
    {
        x+=32;
    }

    else if(x>='a' && x<='z')
    {
        x-=32;
    }

    cout<<x;

    return 0;
}
