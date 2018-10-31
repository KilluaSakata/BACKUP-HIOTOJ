#include<stdio.h>

int main()
{
    printf("Input three different integers:\n");
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    printf("Sum is %d\n",sum);
    printf("Average is %d\n",sum/3);
    printf("Product is %d\n",a*b*c);
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
    printf("Smallest is %d\n",c);

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
    printf("Largest is %d\n",c);
    return 0;
}
