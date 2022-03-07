#include<stdio.h>
int main()
{
    int a,n[10],sume=0,sumo=0;
    printf("Enter 10 no of integers:");
    scanf("%d",&n[10]);
    for(a=0;a<10;a++);
    {
        if(n[a]%2==0)
        {
            sume=sume+n[a];
        }
        else
        {
            sumo=sumo+n[a];
        }
    }
    printf("Sum of even numbers is %d",sume);
    printf("Sum of odd numbers is %d",sume);
    return 0;
}