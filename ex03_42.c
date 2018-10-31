#include<stdio.h>

int main()
{
    double r;
    printf("Input the circle radius:\n");
    scanf("%lf",&r);
    double s=3.14159*r*r;
    double c=2*3.14159*r;
    double d=2*r;
    printf("The diameter is %.2lf\n",d);
    printf("The circumference is %.2lf\n",c);
    printf("The area is %.2lf\n",s);
    return 0;
}
