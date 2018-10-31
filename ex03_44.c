#include<stdio.h>

int main()
{
    printf("Enter three positive numbers:\n");
    double a;
    double b;
    double c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double LARGE;
    double MIDDLE;
    double SH0RT;
    if(a>b)
    {
        LARGE=a;
        MIDDLE=b;
        if(c>a)
        {
            LARGE=c;
            MIDDLE=a;
            SH0RT=b;
        }
        if(c<a)
        {
            if(c>b)
            {
                LARGE=a;
                MIDDLE=c;
                SH0RT=b;
            }
            if(c<b)
            {
                LARGE=a;
                MIDDLE=b;
                SH0RT=c;
            }
        }
    }
    if(a<b)
    {
        LARGE=b;
        MIDDLE=a;
        if (c>b)
        {
            LARGE=c;
            MIDDLE=b;
            SH0RT=a;
        }
        if(c<b)
        {
            if(c>a)
            {
                LARGE=b;
                MIDDLE=c;
                SH0RT=a;
            }
            if(c<a)
            {
                LARGE=b;
                MIDDLE=a;
                SH0RT=c;
            }
        }
    }
    if(SH0RT+MIDDLE>LARGE & LARGE-MIDDLE<SH0RT)
    {
        printf("The three integers could be the sides of a triangle\n");
    }
    else
    {
        printf("The three numbers cannot be the sides of a triangle\n");
    }
    return 0;
}
