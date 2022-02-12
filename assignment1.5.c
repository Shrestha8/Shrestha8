#include<stdio.h>
#include<math.h>
#define pi 3.146
int main()
{
    float r,d,c,a;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    d=r*2;
    c=2*pi*r;
    a=pi*r*r;
    printf("The diameter of the circle is %f",d);
    printf("The circumference of the circle is %f",c);
    printf("The area of the circle is %f",a);
    return 0;
}