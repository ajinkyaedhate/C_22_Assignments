// 1. Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float circle(float);

int main()
{
    float area, radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = circle(radius);
    printf("area of the circle is %.2f: ", area);

    return 0;
}
float circle(float r)
{
    return 3.14 * r * r;
}