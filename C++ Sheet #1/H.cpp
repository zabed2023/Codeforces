#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a,b;
    char d='/',e='=';

    cin>> a>>b;

    double floorResult= floor(a/b);
    double ceilResult=  ceil(a/b);
    double roundResult= round(a/b);

    cout<< "floor" <<" "<<a<<" "<<d<<" "<<b<<" "<<e<<" "<<floorResult<<endl;
    cout<< "ceil" <<" "<<a<<" "<<d<<" "<<b<<" "<<e<<" "<<ceilResult<<endl;
    cout<< "round" <<" "<<a<<" "<<d<<" "<<b<<" "<<e<<" "<<roundResult<<endl;






    return 0;
}
