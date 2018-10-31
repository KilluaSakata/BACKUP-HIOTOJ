#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    //Only for number in thousand
    int f=num/100000;
    int a=num%10000/1000;
    int b=num%1000/100;
    int c=num%100/10;
    int d=num%10;
    int e=num%100000/10000;
    int seven=0;
    if(f==7)
    {
        seven++;
    }
    if(e==7)
    {
        seven++;
    }
    if(a==7)
    {
        seven++;
    }
    if(b==7)
    {
        seven++;
    }
    if(c==7)
    {
        seven++;
    }
    if(d==7)
    {
        seven++;
    }
    printf("The number %d has %d seven(s) in it\n",num,seven);
    return 0;
}
