#include<stdio.h>

int main(int a,int sum)
{
    for(sum=0,a=2;a<=100;a++)
    {
        if(a%2!=0)
            continue;
        else
            sum=sum+a;
    }
    printf("Sum is %d\n",sum);
}
