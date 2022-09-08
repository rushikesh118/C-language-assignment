/* Q4 WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
 Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.*/

#include <stdio.h>
int main()
{
    float radius, Area;
    printf("Radius of circle: ");
    scanf("%f", &radius);
    Area = 3.14 * radius * radius;
    printf("Area of circle is %f having the radius %f", Area, radius);
    return 0;
}