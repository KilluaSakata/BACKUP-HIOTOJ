#include<stdio.h>

int main()
{
    float a;
    float b;
    printf("Please enter your height (in meters):\n");
    scanf("%f",&a);
    printf("Please enter your weight (in kilograms):\n");
    scanf("%f",&b);
    float c=a*a;
    float bmi=b/c;
    printf("Your BMI is %.2f\n",bmi);
    printf("\n");
    printf("BMI VALUES\n");
    printf("Underweight:    less than 18.5\n");
    printf("Normal:         between 18.5 and 24.9\n");
    printf("Overweight:     between 25 and 29.9\n");
    printf("Obese:          30 or greater\n");
    return 0;
}
