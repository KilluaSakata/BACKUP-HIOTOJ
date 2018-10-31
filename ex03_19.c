#include<stdio.h>

int main()
{
    double a;
    double sum1=0;

    while(1)
    {
        printf("Enter sales in dollars ( -1 to end ):\n");
        scanf("%lf", &a);
        if(a == -1)
        break;
        sum1=a*0.09+200;
        printf("Salary is: $%.2lf\n",sum1);
        printf("\n");
    }
    printf("\n");
    return 0;
}
