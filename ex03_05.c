#include<stdio.h>

int main()
{
    int a=1;
    int count=0;
    int sum=0;
    while(a<=10)
    {
        sum+=a;
        a++;
    }
    printf("The sum is: %d\n",sum);
    return 0;
}
