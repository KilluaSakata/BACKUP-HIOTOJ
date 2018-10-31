#include<stdio.h>

int main()
{
    printf("       A     A+2     A+4     A+6\n");
    for(int n = 3;n<=15;n=n+3)
    {
        printf("%8d%8d%8d%8d",n,n+2,n+4,n+6);
        printf(" ");
        printf("\n");
    }
    return 0;
}
