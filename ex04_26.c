#include<stdio.h>
#include<math.h>
void main()
{
    int n=0;
    double i=1;
    double sum=0;
    while((1/i)>0.0000001)
    {
        n++;
        if(n%2==0)
            i=i*(-1);
        sum=sum+1.0/i;
        if(i<0)
            i=i*(-1);
        i+=2;
    }
    printf("%.5lf",sum*4);
    return 0;
}
