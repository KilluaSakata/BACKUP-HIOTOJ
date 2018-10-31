#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=!((a>4)||(b<6));
    d=!(a>4)&&!(b<=6);
    printf("%d\n%d\n",c,d);
    if(c==d)
    {
        printf("Equivalent\n");
    }
    return 0;
}
