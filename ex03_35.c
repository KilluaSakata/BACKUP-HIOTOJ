#include<stdio.h>

int main()
{
    int num;
    printf("Enter a five-digit number:\n");
    scanf("%d",&num);
    int a,b,c,d,e;
    a=num/10000;
    b=num%10000/1000;
    c=num%1000/100;
    d=num%100/10;
    e=num%10;
    int bnum=e*10000+d*1000+c*100+b*10+a;
    if(bnum==num)
    {
        printf("%d is a palindrome\n",num);
    }
    else
    {
        printf("%d is not a palindrome\n",num);
    }
    return 0;
}
