#include<stdio.h>

int main()
{
    int x;
    int y;
    printf("Enter first integer:\n");
    scanf("%d",&x);
    printf("Enter second integer:\n");
    scanf("%d",&y);
    int counter;
    counter =0;
    int sum=x;
    while(1)
    {
        if(counter>=y-1)
            break;
        sum=sum*x;
        counter++;
    }
    printf("%d",sum);
    return 0;
}
