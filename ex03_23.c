#include<stdio.h>

int main()
{
    int num=1;
    while(1)
    {
       printf("%d",num);
       if(num==10)
        break;
       printf("   ");
       num++;
    }
    return 0;
}
