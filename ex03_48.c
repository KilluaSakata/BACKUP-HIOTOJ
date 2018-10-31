#include<stdio.h>

int main()
{
    int birthday;
    int birthmonth;
    int birthyear;
    int day;
    int month;
    int year;

    printf("Please enter month, day, and year of birth separated by spaces (use numbers):\n");
    scanf("%d%d%d",&birthmonth,&birthday,&birthyear);
    printf("Please enter today's month, day, and year separated by spaces (use numbers):\n");
    scanf("%d%d%d",&month,&day,&year);

    int dueyear=year-birthyear;

    if(month<birthmonth)
    {
            dueyear=dueyear-1;
    }
    if(month==birthmonth)
    {
        if(day<birthday)
        {
            dueyear=dueyear-1;
        }
    }

    double maxrate=220-dueyear;
    double lowhoperate=maxrate*0.5;
    double highhoperate=maxrate*0.85;

    printf("Date of Birth: %d/%d/%d\n",birthmonth,birthday,birthyear);
    printf("Age: %d\n",dueyear);
    printf("Maximum Heart Rate: %.2lf\n",maxrate);
    printf("Target Heart Rate Range: %.2lf - %.2lf\n",lowhoperate,highhoperate);
    return 0;
}
