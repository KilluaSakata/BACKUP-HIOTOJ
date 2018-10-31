#include<stdio.h>

int main()
{
    int res,res1,res2,res3,res4;
    printf("Please input a 4-digit number you wish to unencrypt:\n");
    scanf("%d",&res);
    res4=res/1000;
    res3=res%1000/100;
    res2=res%100/10;
    res1=res%10;
    int num4,num3,num2,num1;
    if(res4<7)
    {
        num4=res4+3;
    }
    if(res4>=7)
    {
        num4=res4-7;
    }
    if(res3<7)
    {
        num3=res3+3;
    }
    if(res3>=7)
    {
        num3=res3-7;
    }
    if(res2<7)
    {
        num2=res2+3;
    }
    if(res2>=7)
    {
        num2=res2-7;
    }
    if(res1<7)
    {
        num1=res1+3;
    }
    if(res1>=7)
    {
        num1=res1-7;
    }
    printf("The encrypted number is %d%d%d%d",num2,num1,num4,num3);
    return 0;
}
