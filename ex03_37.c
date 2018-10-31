#include<stdio.h>

int main()
{
    int num;
    while(1)
    {
        if(num==1000000000)
            break;
        num++;
        if(num%100000000==0)
        {
            printf("%d\n",num);
        }
    }
    return 0;
}
