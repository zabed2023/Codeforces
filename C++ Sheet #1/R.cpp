#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;

    int years=x/365;
    int  Rmonths=x%365;

    int months= Rmonths/30;
    int days= Rmonths%30;

    cout<<years<<" "<<"years"<<endl;
    cout<<months<<" "<<"months"<<endl;
    cout<<days<<" "<<"days"<<endl;

    return 0;
}
