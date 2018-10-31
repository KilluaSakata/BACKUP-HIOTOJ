#include <stdio.h>

int main()
{
    for(int line=1; line<=10; line++)
    {
        for(int length=0; length<line; length++)
        {
            printf("*");
        }
        if(line!=10)
        {
            printf("\n");
        }
    }
    return 0;
}
