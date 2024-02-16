//volume and surface area of a sphere
#include<stdio.h>
void main()
{
    double radius;
    printf("\nEnter the radius = ");
    scanf("%lf",&radius);
    double volume=(4*3.14*radius*radius*radius)/3;
    double surface_area=4*3.14*radius*radius;
    printf("\nVolume = %.2lf\nSurface area = %.2lf",volume,surface_area);

}

/*Outputs
Enter the radius = 3.526

Volume = 183.53
Surface area = 156.15


Enter the radius = 1

Volume = 4.19
Surface area = 12.56
*/


