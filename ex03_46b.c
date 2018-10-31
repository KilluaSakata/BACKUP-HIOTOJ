#include<stdio.h>

int main()
{
    double num;
    double sum;
    double bnum;
    double total;
    num=0;
    sum=0;
    total=0;
    double sum2;

    while(2)
    {
        if(num==10)
            break;
            num++;
            bnum=num;
            if(num==0)
                sum=1;
            if(num>0)
                {
                    sum=num;
                    while(1)
                    {
                        bnum--;
                        if(bnum<1)
                            break;
                        sum=sum*bnum;
                    }
                }
            sum2=1/sum;
            total=total+sum2;
    }
    printf("e is %lf",total+1);
    return 0;
}
