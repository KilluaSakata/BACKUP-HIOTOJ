#include<stdio.h>

int main()
{
    int a;
    double b;
    double sum;
    int counter=0;
    printf("Please input the current population:\n");
    scanf("%d",&a);
    printf("Please input the rate of population growth( % ):\n");
    scanf("%lf",&b);
    sum=a;
    b=b/100;
    while(1)
    {
        if(counter==5)
            break;
        counter++;
        sum=sum+sum*b;
    }
    sum=sum/1000;
    printf("The population after 5 years is %.0lf thousands\n",sum);
    return 0;
}
