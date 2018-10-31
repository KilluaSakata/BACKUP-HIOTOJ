#include<stdio.h>

int main()
{
    int num;
    printf("Enter a binary number\n");
    scanf("%d",&num);
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    num7=num%10000000000/1000000000;
    num8=num%1000000000/100000000;
    num9=num%100000000/10000000;
    num10=num%10000000/1000000;
    num1=num%1000000/100000;
    num2=num%100000/10000;
    num3=num%10000/1000;
    num4=num%1000/100;
    num5=num%100/10;
    num6=num%10;
    int tnum;
    tnum=num6*1+num5*2+num4*4+num3*8+num2*16+num1*32+num10*64+num9*128+num8*256+num7*512;
    printf("The decimal equivalent of %d is %d\n",num,tnum);
    return 0;
}
