#include<stdio.h>

int main()
{
    int a;
    int count = 0;
    int sum = 0;

    while(1)
    {
        printf("Enter grade, -1 to end:\n");
        scanf("%d", &a);
        if(a == -1)
        break;
        sum = sum + a;
        count++;
    }
    printf("Class average is %.2f\n", sum*1.0/count);
    return 0;
}
