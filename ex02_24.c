#include<stdio.h>

int main()
{
    printf("Input an integer:\n");
    int a;
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("%d is an even integer\n",a);
    }
    else
    {
        printf("%d is an odd integer\n",a);
    }
    return 0;
}
