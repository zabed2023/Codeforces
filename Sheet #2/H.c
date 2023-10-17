#include <stdio.h>
int main()
{
    int a,i,lol;

    scanf("%d",&a);

    lol=0;

    for(i=1; i<=a; i++)
    {
	if(a%i==0)
        lol++;
    }
    if(lol==2)
    {
       printf("YES\n");
	}
    else
    {
       printf("NO\n");
	}
	return 0;
}
