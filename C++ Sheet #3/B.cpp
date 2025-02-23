#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    int x;
    cin>>x;
   int f=-1;

    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            f=i;
            break;
        }

    }

    cout<<f<<endl;


    return 0;
}
