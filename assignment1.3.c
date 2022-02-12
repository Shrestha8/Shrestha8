#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number:","\n");
    scanf("%d",&a);
    b=a%2;
    switch(b)
    {
        case 0:
        printf("The number is even");
        break;
        default:
        printf("The number is odd");
        break;
    }
    return 0;
}