#include<stdio.h>

int main()
{
    printf("Enter grade:\n");
    int grade;
    scanf("%d",&grade);
    if(grade>=60)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }
    printf("\n");
    return 0;
}
