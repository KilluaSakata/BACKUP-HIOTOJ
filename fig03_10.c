#include<stdio.h>

int main()
{
    int count;
    int a;
    int b;
    int judge;
    a=0;
    b=0;
    for(count=0;count<10;count++)
    {
        printf("Enter result ( 1=pass, 2=fail ):\n");
        scanf("%d",&judge);

        if(judge==1)
        {
            a=a+1;
        }
        else
        {
            b=b+1;
        }
    }
    printf("Passed %d\n",a);
    printf("Failed %d\n",b);
    if(a>8)
    {
        printf("Bonus to instructor!\n");
    }
    return 0;
}
