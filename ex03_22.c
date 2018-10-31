#include<stdio.h>

int main()
{
    int number;
    int backup;
    scanf("%d",&number);
    backup=number;
    printf("%d\n",number);
    printf("%d\n",--number);
    printf("%d\n",number);
    printf("\n");
    number=backup;
    printf("%d\n",number);
    printf("%d\n",number--);
    printf("%d\n",number);
    printf("\n");
    return 0;
}
