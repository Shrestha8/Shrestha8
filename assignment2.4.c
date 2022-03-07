#include<stdio.h>

int main()
{
    int i,n;
    int a=0,b=1,nextterm=0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    printf("the fibonacci series is %d \n",b);
    for(i=2;i<=n;++i)
    {
        nextterm=a+b;
        printf("%d",nextterm);
        a=b;
        b=nextterm;
        
    }
    
    return 0;
}