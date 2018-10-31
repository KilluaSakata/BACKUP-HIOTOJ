#include<stdio.h>

int main()
{
    int number;
    double balance;
    double charge;
    double credit;
    double limit;
    double balancenew;

    while(1)
    {
        printf("Enter account number ( -1 to end ):\n");
        scanf("%d",&number);
        if (number == -1)
            break;
        printf("Enter beginning balance:\n");
        scanf("%lf",&balance);
        printf("Enter total charges:\n");
        scanf("%lf",&charge);
        printf("Enter total credits:\n");
        scanf("%lf",&credit);
        printf("Enter credit limit:\n");
        scanf("%lf",&limit);
        balancenew=balance+charge-credit;
        printf("Account:      %d\n",number);
        printf("Credit limit: %.2lf\n",limit);
        printf("Balance:      %.2lf\n",balancenew);
        if(balancenew>limit)
        {
            printf("Credit Limit Exceeded.\n");
        }
        else
        {
            printf("Credit Limit Not Exceeded.\n");
        }
        printf("\n");
    }
    return 0;
}
