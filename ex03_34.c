#include<stdio.h>

int main()
{
    int side;
    int counter=0;
    int seccounter=0;
    printf("Enter the square side:\n");
    scanf("%d",&side);
    while(1)
    {
        if(counter == side)
            break;
        while(2)
        {
            if(seccounter == side)
            break;
            if(seccounter>1 & seccounter<side)
            {
                if(counter>0 & counter<side-1)
                {
                    printf(" ");
                }
                if(counter == side-1)
                {
                    printf("*");
                }
                if(counter == 0)
                {
                    printf("*");
                }
            }
            if(seccounter == side-1)
            {
                printf("*");
            }
            if(seccounter == 0)
            {
                printf("*");
            }
            seccounter++;
        }
        printf("\n");
        counter++;
        seccounter = 0;
    }
    return 0;
}
