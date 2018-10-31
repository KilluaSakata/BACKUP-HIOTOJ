#include<stdio.h>

int main()
{
    double a;
    double b;
    double c;
    double sum1=0;

    while(1)
    {
        printf("Enter loan principal ( -1 to end ):\n");
        scanf("%lf", &a);
        if(a == -1)
        break;
        printf("Enter interest rate:\n");
        scanf("%lf",&b);
        printf("Enter term of the loan in days:\n");
        scanf("%lf",&c);
        sum1=a*b*c/365;
        printf("The interest charge is $%.2lf\n",sum1);
        printf("\n");
    }
    printf("\n");
    return 0;
}
