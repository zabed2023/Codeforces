#include<iostream>

using namespace std;

int main()
{
    int x,i;

    while(1)
    {
        cin>>x;
        if(x!=1999)
        {
            cout<<"Wrong"<<endl;
        }
        else if(x==1999)
        {
            cout<<"Correct";
            break;
        }
    }

    return 0;
}
