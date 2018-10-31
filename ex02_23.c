#include<stdio.h>

int main()
{
  printf("Input 5 integers:\n");
  int a;
  int b;
  int c;
  int d;
  int e;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  if(a>b)
    {
        double LGE=a;
        a=b;
        b=LGE;
    }
    if(b>c)
    {
        double LGE=b;
        b=c;
        c=LGE;
    }
    if(c>d)
    {
        double LGE=c;
        c=d;
        d=LGE;
    }
    if(d>e)
    {
        double LGE=d;
        d=e;
        e=LGE;
    }
    printf("The largest value is %d\n",e);
    if(a<b)
    {
        double SML=a;
        a=b;
        b=SML;
    }
    if(b<c)
    {
        double SML=b;
        b=c;
        c=SML;
    }
    if(c<d)
    {
        double SML=c;
        c=d;
        d=SML;
    }
    if(d<e)
    {
        double SML=d;
        d=e;
        e=SML;
    }
    printf("The smallest value is %d\n",e);
    return 0;
}
