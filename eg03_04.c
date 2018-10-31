#include<stdio.h>

int main()
{
    printf("Enter grade:\n");
    int grade;
    scanf("%d",&grade);
    if(grade<=100 && grade>=90)
    {
        printf("A");
    }
    if(grade<90 && grade>=80)
    {
        printf("B");
    }
    if(grade<80 && grade>=70)
    {
        printf("C");
    }
    if(grade<70 && grade>=60)
    {
        printf("D");
    }
    if(grade<60)
    {
        printf("F");
    }
    printf("\n");
    return 0;
}
