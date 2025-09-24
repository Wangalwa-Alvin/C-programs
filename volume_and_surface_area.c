/*
Name : Wangalwa Alvin 
Registration NO.: PA106/G/28804/25
Description: volume and surface area of a cylinder
*/
#include <stdio.h>

// main function
int main() {
    float radius, height, volume, surfaceArea;
    float PI=3.142;

    // Input
    printf("Enter radius of the cylinder(cm): ");
    scanf("%f", &radius); 

    printf("Enter height of the cylinder(cm): ");
    scanf("%f", &height);

    // Calculations
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Output
    printf("Volume of the cylinder: %f (cm^2)\n", volume);
    printf("Surface area of the cylinder: %f (cm^2)\n", surfaceArea);

    return 0;
}