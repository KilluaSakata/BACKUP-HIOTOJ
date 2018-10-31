#include <stdio.h>

int main()
{
    for(int line=10; line>=1; line--)
    {
        for(int length=0; length<line; length++)
        {
            printf("*");
        }
        if(line!=1)
        {
            printf("\n");
        }
    }
    return 0;
}
