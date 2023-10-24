#include<stdio.h>
int main()
{
    int x,y,k,s,cnt=0,z;
    scanf("%d%d",&k,&s);
    for(x=0;x<=k;x++)
        for(y=0;y<=k;y++)
        {
            z=s-(x+y);
    if(0<=z && z<=k)
        cnt++;
        }
        printf("%d\n",cnt);
        return 0;


}
