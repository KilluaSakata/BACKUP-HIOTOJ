#include<stdio.h>

int main()
{
    int sum = 0;
    int average;
    int score;
    int count;
    for(count=0;count<10;count++)
    {
        printf("Enter grade:\n");
        scanf("%d",&score);
        sum=sum+score;
    }
    average = sum/count;
    printf("Class average is %d\n",average);
    return 0;
}
