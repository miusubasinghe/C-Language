#include <stdio.h>
#include <stdlib.h>
int main()
{
 int choice;
 double radius,circumference,area,volume;
 printf("Menu. \n");
 printf("1. Calculate Circumference of a Circle \n");
 printf("2. Calculate area of a Circle \n");
 printf("3. Calculate volume of a sphere \n");
 printf("Enter Your Choice [1-3]: ");
 scanf("%d", &choice);
 switch(choice)
 {
 case 1:
 printf("Enter the radius of the circle: ");
 scanf("%lf", &radius);
 circumference= 2 * 3.1415 * radius;
 printf("Circumference of the circle: %.2lf \n", circumference);
 break;
 case 2:
 printf("Enter the radius of the circle: ");
 scanf("%lf", &radius);
 area= 3.1415 * pow(radius, 2);
 printf("Area of the circle: %2lf \n", area);
 break;
 case 3:
 printf("Enter the radius of the sphere: ");
 scanf("%2lf", &radius);
 volume=(4.0/3.0) * 3.1415 * radius * radius * radius;
 printf("Volume of the sphere: %2lf \n", volume);
 break;
 default:
 printf("Invalid Choice\n");
 break;
 }
 return 0;
}
