#include<stdio.h>

int main()
{
    double a;
    double b;
    double sum1=0;
    double sum2;
    double sum3;

    while(1)
    {
        printf("Enter # of hours worked ( -1 to end ):\n");
        scanf("%lf", &a);
        if(a == -1)
        break;
        printf("Enter hourly rate of the worker:\n");
        scanf("%lf",&b);
        if(a<=40)
        {
            sum1=a*b;
        }
        if(a>40)
        {
            sum2=(a-40)*1.5*b;
            sum3=40*b;
            sum1=sum2+sum3;
        }
        printf("Salary is $%.2lf\n",sum1);
        printf("\n");
    }
    printf("\n");
    return 0;
}
