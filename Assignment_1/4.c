// 4. WAP to find the area of the circle.Take radius of circle from user as input and print the result in below given format.

#define M_PI 3.14
#include <stdio.h>
#include <math.h>

int main() {
    double radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    area = M_PI * radius * radius;
    
    printf("The area of the circle with radius %.2lf is %.2lf square units.\n", radius, area);
    
    return 0;
}

