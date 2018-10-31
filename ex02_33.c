#include<stdio.h>

int main()
{
    float a;
    float b;
    float c;
    float d;
    float e;
    printf("Please enter the total kilometers driven per day:\n");
    scanf("%f",&a);
    printf("Please enter the cost per liter of gasoline:\n");
    scanf("%f",&b);
    printf("Please enter average kilometers per liter:\n");
    scanf("%f",&c);
    printf("Please enter the parking fees per day:\n");
    scanf("%f",&d);
    printf("Please enter the tolls per day:\n");
    scanf("%f",&e);
    float f= a/c;
    f = f*b ;
    f = f+d+e;
    printf("Your daily cost of driving to work is $%.2f",f);
    return 0;
}
