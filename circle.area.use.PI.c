#include<stdio.h> //documentation

#define PI 3.1415 //declaration
int main()
{
    double radius, area;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    area= PI*radius*radius;

    printf("The area of circle is: %.2f\n",area);

    return 0;

}
