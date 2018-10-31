#include<stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer:\n");
    scanf("%d",&num);
    int sum=0;
    int bnum;
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
    printf("%d! is %d\n",num,sum);
    return 0;
}
