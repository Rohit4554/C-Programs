/*Write a ‘C’ program to calculate area, & perimeter and diameter of circle
using one function for all & use pointers.*/

#include<stdio.h>
void calculatecircleproperties(float radius,float *area, float *perimeter, float *diameter)
{
    *area=3.1415*radius*radius;
    *perimeter=2*3.1415*radius;
    *diameter=2*radius;
}
int main()
{
    float radius,area,perimeter,diameter;
    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    calculatecircleproperties(radius,&area,&perimeter,&diameter);

    printf("Area of circle:%.4f\n",area);
    printf("Perimeter of circle:%.4f\n",perimeter);
    printf("Diameter of circle:%.4f\n",diameter);

    return 0;
}
