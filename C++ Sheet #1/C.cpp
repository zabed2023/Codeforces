#include<iostream>

using namespace std;

int main()
{
    long long int x,y;
    char p='+',e='=',m='-',mu='*';

    cin>>x >> y;

    long long int sum=x+y,mul=x*y,sub=x-y;

    cout<<x <<" "<< p <<" "<< y <<" "<< e<<" "<< sum<<endl;

    cout<<x <<" "<< mu <<" "<< y <<" "<< e<<" "<< mul<<endl;

    cout<<x <<" "<< m <<" "<< y <<" "<< e<<" "<< sub<<endl;


    return 0;
}
