#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:","\n");
    scanf("%d %d",&a,&b);
    if (a>b)
    printf("%d is maximum",a);
    else
    printf("%d is minimum",b);
    return 0;
}