#include<stdio.h>

int main()
{
    int counter=0;
    while(1)
    {
        if(counter == 10)
            break;
        counter++;
        if(counter % 2 == 0)
        {
            printf("++++++++\n");
        }
        if(counter % 2 != 0)
        {
            printf("****\n");
        }
    }
    return 0;
}
