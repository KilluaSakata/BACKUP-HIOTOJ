#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    float a,e;
    int x;
    scanf("%d",&x);
    e=1;
    i=0;
    a=1;
    while(1)
    {
        if(i==15)
            break;
        i++;
        a=a*x/i;
        e=e+a;
    }
    printf("e raised to the %d power is %.2f",x,e);
    return 0;
}
