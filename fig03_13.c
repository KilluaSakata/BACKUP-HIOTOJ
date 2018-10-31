#include<stdio.h>

int main()
{
    int c;
    int backup;
    scanf("%d",&c);
    backup=c;
    printf("\n");
    printf("%d\n",c);
    printf("%d\n",++c);
    printf("%d\n",c);
    printf("\n");
    c=backup;
    printf("%d\n",c);
    printf("%d\n",c++);
    printf("%d\n",c);
    return 0;
}
