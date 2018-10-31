#include<stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if (a > b)
    {
        printf("%d is larger\n",a);
    }
    if (b > a)
    {
        printf("%d is larger\n",b);
    }
    if (a == b)
    {
        printf("These numbers are equal\n");
    }
    return 0;
}
