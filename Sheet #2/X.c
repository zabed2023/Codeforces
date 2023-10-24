#include<stdio.h>
#include<math.h>
int main()
{
    int s,n,x,y,r,i;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&y);
        int cnt=0;
        x=y;

        while(x>0)
        {
            r=x%2;
            x/=2;
           if(r==1)
            cnt++;
        }
        s= pow(2,cnt)-1;
        printf("%d\n",s);


    }

  return 0;
}
