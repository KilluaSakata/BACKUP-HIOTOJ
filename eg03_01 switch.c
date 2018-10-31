#include<stdio.h>

int grade(int a)
{
    switch(a/10)
    {
        case 10:
        case 9:
        return 5;
        case 8:
        return 4;
        case 7:
            return 3;
        case 6:
            return 2;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            return 1;
        default:
            return 0;
    }
}
int main(void)
{
    int a;
    printf("Enter grade:\n");
    scanf("%d",&a);
    int fin=grade(a);
    if(fin==5)
    {
        printf("A\n");
    }
    else if(fin==4)
    {
        printf("B\n");
    }
    else if(fin==3)
    {
        printf("C\n");
    }
    else if(fin==2)
    {
        printf("D\n");
    }
    else if(fin==1)
    {
        printf("F\n");
    }
    else
    {
        printf("Program Error.\n");
        return 1;
    }
    return 0;
}
