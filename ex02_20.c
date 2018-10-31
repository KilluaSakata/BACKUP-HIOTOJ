#include<stdio.h>

int main()
{
    printf("Input the circle radius:\n");
    float r;
    scanf("%f",&r);
    printf("The diameter is %.2f\n",2*r);
    printf("The circumference is %.2f\n",2*r*3.14159);
    printf("The area is %.2f\n",r*r*3.14159);
    return 0;
}
