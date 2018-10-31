#include<stdio.h>

int main()
{
    printf("           N      10 * N     100 * N    1000 * N \n");
    for(int n = 1;n<=10;n++)
    {
        printf("%12d%12d%12d%12d",n,n*10,n*100,n*1000);
        printf(" ");
            printf("\n");
    }
    return 0;
}
