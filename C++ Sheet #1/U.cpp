#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float x;
    cout<<setprecision(3);

    cin>>x;

    int y=x;

    float z=x-y;

    if(z==0)
    {
        cout<<"int"<<" "<<y;
    }
    else
    {
        cout<<"float"<<" "<<y<<" "<<z;
    }

    //cout<<y<<endl<<z;

    return 0;
}
