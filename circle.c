#include<stdio.h>
#include<math.h>

int main()
{
    float radius;
    double pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%f",&radius);

    double area = 2 * pow(radius, 2);
    double circumference = 2 * pi * radius;

    printf("The area of the circle is %.2lf\n",area);
    printf("The circumference of the circle is %2lf",circumference);

    return 0;
}
