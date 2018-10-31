#include<stdio.h>

int main()
{
    int a=1;
    int sum=0;
    int c;
    while(1)
    {
        if(a>10)
            break;
        c=a*a;
        printf("%d\n",c);
        sum=sum+c;
        a++;
    }
    printf("Total is %d\n",sum);
    return 0;
}
