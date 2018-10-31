#include<stdio.h>

int main()
{
    int num,num4,num3,num2,num1;
    printf("Please input a 4-digit number you wish to encrypt:\n");
    scanf("%d",&num);
    num4=num/1000;
    num3=num%1000/100;
    num2=num%100/10;
    num1=num%10;
    int res4,res3,res2,res1;
    int tmp4,tmp3,tmp2,tmp1;
    tmp4=num4+7;
    tmp3=num3+7;
    tmp2=num2+7;
    tmp1=num1+7;
    res4=tmp4%10;
    res3=tmp3%10;
    res2=tmp2%10;
    res1=tmp1%10;
    printf("The encrypted number is %d%d%d%d",res2,res1,res4,res3);
    return 0;
}
