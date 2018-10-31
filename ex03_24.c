#include<stdio.h>

int main()
{
    int counter = 0;
    int num_high=0;
    int temp=0;

    printf("Enter the first number: ");
    scanf("%d",&num_high);

    while(1)
    {
        //Debug
        //printf("DEBUG:(NOW)num_high:%d num_sechigh:%d temp:%d\n",num_high,num_sechigh,temp);
        //Release
        if(counter == 9)
            break;
        counter++;
        printf("Enter next number: ");
        scanf("%d",&temp);

        if(num_high<temp)
        {
            num_high=temp;
        }
    }
    printf("Largest is %d\n",num_high);
    return 0;
}
