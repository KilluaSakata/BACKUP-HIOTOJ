#include<stdio.h>


int main()
{
    char grade;
    double score=0;
    int counter=0;
    while(~scanf("%c",&grade))
    {
        if(grade==94)
            break;
        printf("%d\n",grade);
        if(grade==65||grade==97)
            score=score+4.0;
        else if(grade==66||grade==98)
            score=score+3.0;
        else if(grade==67||grade==99)
            score=score+2.0;
        else if(grade==6810||grade==100)
            score=score+1.0;
        else
            score=score+0;
        printf("%d\n",score);
        counter++;
    }
    score=score/counter;
    printf("%.1lf",score);
}
