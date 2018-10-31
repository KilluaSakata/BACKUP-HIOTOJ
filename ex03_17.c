#include<stdio.h>

int main()
{
    double a;
    double b;
    double sum1=0;
    double sum2=0;

    while(1)
    {
        printf("Enter the gallons used ( -1 to end ):\n");
        scanf("%lf", &a);
        if(a == -1)
        break;
        printf("Enter the miles driven:\n");
        scanf("%lf",&b);
        double c=b/a;
        printf("The miles / gallon for this tank was %.2lf\n",c);
        sum1=sum1+a;
        sum2=sum2+b;
        printf("\n");
    }
    printf("\n");
    printf("The overall average miles / gallon was %.2lf\n", sum2/sum1);
    return 0;
}
