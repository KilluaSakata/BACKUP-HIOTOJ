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
            printf("*");
            seccounter++;
        }
        printf("\n");
        counter++;
        seccounter = 0;
    }
    return 0;
}
